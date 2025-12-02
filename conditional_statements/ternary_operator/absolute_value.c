#include<stdio.h>
void main(){
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    printf("the absolute value is:%d",a>0?a:-a);
}