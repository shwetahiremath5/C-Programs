#include<stdio.h>
#include<stdlib.h>
#define MAX 3
int front = -1 ,rear = -1;
typedef struct process{
    int pid ;
    int pr;
    int bt;
}job;
job pjob[MAX];
void insert(){
    int pid,pr,bt;
    if(rear==MAX-1)
    printf("overflow");
    else{
        printf("enter pid,pr,bt\n");
        scanf("%d %d %d",&pid,&pr,&bt);
        if(rear==-1){
            rear++,front++;
        }
        else{
            rear++;
        }
        pjob[rear].pid=pid;
        pjob[rear].pr=pr;
        pjob[rear].bt=bt;
    }
}
void delete(){
    int max=0,pos=0,i;
    if(front==-1)
    printf("underflow");
    else{
        if(front==rear){
            rear=-1,front=-1;
        }
        else{
            for(int i=front;i<=rear;i++){
                if(pjob[i].pr>=max){
                    max=pjob[i].pr;
                    pos=i;
                }
            }
            for(i=pos;i<=rear;i++){
            pjob[i].pid=pjob[i+1].pid;
            pjob[i].pr=pjob[i+1].pr;
            pjob[i].bt=pjob[i+1].bt;
        }
        rear--;
    }
}
}
void display(){
    if(front==-1)
    printf("queue is empty\n");
    else{
        printf("queue details\n");
                    printf("pid\tpr\tbt\n");
        for(int i=front;i<=rear;i++){
            printf("%d\t%d\t%d\t",pjob[i].pid,pjob[i].pr,pjob[i].bt);
        }
    }
}
void main(){
    int choice;
    printf("1.insert\t2.delete\t3.display\t4.exit\t");
    while(1){
        printf("enter ur choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:insert();
            break;
            case 2:delete();
            break;
            case 3:display();
            break;
            case 4:exit(0);
        }
    }
}