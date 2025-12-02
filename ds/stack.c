#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],item,top=-1; 
int status=0;
void push(int stack[],int item){
    if(top==(MAX-1))
    printf("\noverflow\n");
    else 
    stack[++top]==item;
    status++;
}
int pop(){
    if(top==-1)
    printf("\nunderfloow");
    else
     return stack[top--];
     status--;
}
void palindrome(int stack[]){
    int temp,count=0;
    temp=status;
    for(int i=0;i<temp;i++){
        if(stack[i]==pop())
        count++;
    }
    if(count==temp)
    printf("palindrome\n");
    else 
    printf("not palindrome\n");
}
void display(int stack[]){
    if(top==-1)
    printf("\nstack is empty\n");
    else 
    for(int i=top;i<=0;i--){
        printf("|%d|\n",stack[i]);
    }
}
void main(){
    int choice;
    while (1){
        printf("\n1.push\t2.pop\t3.palindrome\t4.display\t5.exit\n");
        printf("enter the choice:");
        scanf("%d",&choice);
            switch(choice){
                case 1:printf("enter the item:");
                scanf("%d",&item);
                push(stack,item);
                break;
                 case 2:printf("poped item:%d",pop());
                break;
                 case 3:palindrome(stack);
                break;
                case 4:display(stack);
                break;
                case 5:exit(0);
                default:printf("invalid choice");
                break;
            }
    }
}