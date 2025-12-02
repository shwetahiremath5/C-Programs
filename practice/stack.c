#include<stdio.h>
#include<stdlib.h>
#define MAX 5
int stack[MAX],item,top=-1,status=0;
void push(int stack[],int item){
    if(top==MAX-1)
    printf("\noverflow\n");
    else
    stack[++top]=item;
    status++;
}
int pop(){
    if(top==-1)
    printf("underflow\n");
    else
    return stack[top--];
    status--;
}
int palindrome(int stack[]){
    int temp,count=0;
    temp=status;
    for(int i=0;i<temp;i++){
        if(stack[i]!=pop()){
            //count++;
            return 0;
        }
        else 
        return 1;
        /*if(temp==count)
        printf("palindrome\n");
        else
        // printf("not palindrome\n");*/
    }
}
void display(int stack[]){
    if (top==-1)
    {
        printf("stack is empty");
    }
    else{
    for(int i=top;i>=0;i--)
        printf("%d",stack[i]);
    }
}
int main(){
    int choice;
    while(1){
        printf("\nenter the choice:");
        scanf("%d",&choice);
        switch(choice){
            case 1:printf("enter the item:");
            scanf("%d",&item);
            push(stack,item);
            break;
            case 2:printf("poped item:%d",pop());
            break;
            case 3:if(palindrome(stack)==1)
            printf("palindrome");
            else
            printf("not palindrome");
            break;
            case 4:display(stack);
            break;
default:printf("invalid choice");
        }
    }
    return 0;
}