#include<stdio.h>
void main(){
    int a,b;
    printf("enter the first value:");
    scanf("%d",&a);
    printf("enter second value:");
    scanf("%d",&b);
   /* int min=a<b?a:b;
   printf("min is:%d",min); */
    printf("min is:%d",a<b?a:b);
}