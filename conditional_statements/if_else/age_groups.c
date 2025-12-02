#include<stdio.h>
void main(){
    int a;
    printf("enter the age of person:");
    scanf("%d",&a);
    if(a<13)
    printf("Child");
    else if(a<20)
    printf("Teen");
    else if(a<60)
    printf("Adult");
    else
    printf("Senior");
}