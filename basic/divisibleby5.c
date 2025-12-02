#include<stdio.h>
void main(){
    int a;
    printf("enter the value:");
    scanf("%d",&a);
    if(a%5==0&&a%3!=0)
    printf("divisible by 5 not 3");
    else
    printf("not divisible");
}