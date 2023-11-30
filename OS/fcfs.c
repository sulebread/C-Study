#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <windows.h>

struct NODE {
    int nodePid;
    int task;
    int arrivalTime;
    int workingTime;
    int waitTime;
    int returnTime;
    struct NODE *next;
};

struct NODE *taskListQueue, *readyQueue, *runQueue, *terminatedQueue;

void createNode(struct NODE **head);
void arrangeList(struct NODE **head, struct NODE *newNode);
void moveList(struct NODE **head, struct NODE **newNode);

void doTick();
int randNumber(void);
void printNode(struct NODE *head);
void printIntro();
void printSummary();

//최초 노드 생성
struct NODE *init_list() {
    struct NODE *head;
    head = (struct NODE*)malloc(sizeof(struct NODE));
    head->nodePid = 1;
    head->task = randNumber() + 1; //tasktime이 0보다 커야함.
    head->arrivalTime = randNumber();
    head->workingTime = 0;
    head->waitTime = 0;
    head->returnTime = 0;
    head->next = NULL;
}

int main(void) {
    srand(time(NULL));

    taskListQueue = init_list();
    
    //head가 변경될 가능성이 있으므로 주소를 넘겨야함
    createNode(&taskListQueue);
    printIntro();
    doTick();
    printSummary();

    return 0;
}

//링크드리스트 만들기
void createNode(struct NODE **head) {
    int count = randNumber();
    //struct NODE *prev = head;

    for(int i = 0; i < count; i++) {
        struct NODE *newNode = (struct NODE*)malloc(sizeof(struct NODE));

        newNode->nodePid = i + 2;
        newNode->task = randNumber() + 1; //tasktime이 0보다 커야함.
        newNode->arrivalTime = randNumber();
        newNode->workingTime = 0;
        newNode->waitTime = 0;
        newNode->returnTime = 0;
        newNode->next = NULL;
    
        //도착시간순으로 정렬전
        //prev->next = newNode;
        //prev = newNode;

        arrangeList(head, newNode);
    }
}

//Queue 정렬하기
void arrangeList(struct NODE **head, struct NODE *newNode) {
    struct NODE *currentNode = NULL;
    struct NODE *prevNode = NULL;

    /* newNode가 헤드보다 작은지 확인
    01. 작은경우
        001. newNode의 next 링크를 기존 헤드로 지정
        002. newNode를 헤드로 변경
        003. 반복문 탈출
    02. 작지않은 경우
        001. prevNode를 head로 지정
        002. currentNode를 head의 next 링크로 지정
    */
    if (newNode->arrivalTime < (*head)->arrivalTime) {
        newNode->next = (*head);
        *head = newNode;

        return;
    } else {
        prevNode = *head;
        currentNode = (*head)->next;
    }

    //고민했던 point: newNode가 처음 만들어지는 경우 head->next가 null일텐데
    while (currentNode != NULL)
    {
        /* newNode를 currentNode와 비교
        01. currentNode 보다 작거나 같은 경우 currentNode보다 앞에 배치
            001. newNode의 next 링크를 currentNode로 변경
            002. prevNode의 next 링크를 newNode로 변경
            003. 반복문 탈출
        02. currentNode 보다 큰 경우
            001. prevNode를 currentNode로 변경(prevNode의 next로 변경)
            002. currentNode를 currentNode의 next로 변경
        */
        if (newNode->arrivalTime <= currentNode->arrivalTime) {
            newNode->next = currentNode;
            prevNode->next = newNode;
            
            break;
        } else {
            prevNode = currentNode;
            currentNode = currentNode->next;
        }
    }

    prevNode->next = newNode;
}

//Queue 이동
void moveList(struct NODE **head, struct NODE **newNode) {
    struct NODE *temp = *head;

    if ((*head) == NULL) {
        (*head) = *newNode;
        temp = (*head);
    } else {
        while (temp->next != NULL) {
            temp = temp->next;
        }

        //마지막 링크의 다음에 새로운 노드(기존 리스트의 헤더)를 붙임
        temp->next = *newNode;
        temp = temp->next;
    }

    //기존 리스트의 헤드 바꾸기
    *newNode = (*newNode)->next;
    
    temp->next = NULL;
}

void doTick() {
    int tick = 1;
    char enter;
    

    while (!(taskListQueue == NULL && readyQueue == NULL && runQueue == NULL)) {       
        enter = getchar();
        
        //콘솔창 지우기
        system("cls");
        
        if(enter == '\n'){
            //workingTime 증가
            if (runQueue != NULL) {
                runQueue->workingTime += 1;
            }

            //terminatedQueue 넣기
            if(runQueue !=NULL && (runQueue->workingTime == runQueue->task)){
                runQueue->returnTime = tick;
                moveList(&terminatedQueue, &runQueue);
            }

            //waitTime 증가
            struct NODE *temp = readyQueue;
            while (temp != NULL) {
                temp->waitTime += 1;
                temp = temp->next;
            }

            //readyQueue 넣기
            while (taskListQueue != NULL && tick >= taskListQueue->arrivalTime) {
                moveList(&readyQueue, &taskListQueue);
            }
            
            //runQueue 넣기
            while (runQueue == NULL && readyQueue != NULL) {
                moveList(&runQueue, &readyQueue);
            }

            printf("Current Tick: %d\n", tick);
            puts("");
            puts("== Tasks List ==");
            printNode(taskListQueue);
            puts("");
            puts("== Ready Queue List ==");
            printNode(readyQueue);
            puts("");
            puts("== CPU Execute ==");
            printNode(runQueue);
            puts("");            
            puts("== Terminated Queue ==");
            printNode(terminatedQueue);
            puts("");

            tick++;
        }
    }
}

int randNumber(void) {
    int count = rand() % 9;

    return count;
}

void printNode(struct NODE *head) {
    struct NODE *currentNode = head;

    while(currentNode != NULL) {
        printf("PID: %d,  TaskTime: %d,  ArrivalTime: %d,  WorkingTime: %d,  WaitTime: %d,  ReturnTime: %d\n",
            currentNode->nodePid,
            currentNode->task,
            currentNode->arrivalTime,
            currentNode->workingTime,
            currentNode->waitTime,
            currentNode->returnTime);

       
        currentNode = currentNode->next;
    }
}

void printIntro() {    
    system("cls");
    printf("FCFS - HanKyung Bang\n\n");
    puts("=================");
    puts("TaskList");
    puts("=================");
    printNode(taskListQueue);
}

void printSummary() {
    int totalTask = 0;
    int totalWaitingTime = 0;
    double avgWaitingTime = 0;

    while(terminatedQueue != NULL){
        totalTask++;
        totalWaitingTime += terminatedQueue->waitTime;
        terminatedQueue = terminatedQueue->next;
    }

    avgWaitingTime = (double)totalWaitingTime / totalTask;

    puts("=================");
    puts("Summary");
    puts("=================");
    printf("Total Task: %d\n", totalTask);
    printf("Total Waiting Time: %d\n", totalWaitingTime);
    printf("Average Waiting Time: %.2lf\n", avgWaitingTime);
    puts("");
}
