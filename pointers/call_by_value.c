#include<stdio.h>
void swap(int a,int b){
    a=a+b;
    b=a-b;
    a=a-b;
}
void main(){
int a,b;
printf("enter the values of a and b:");
scanf("%d %d",&a,&b);
swap(a,b);
printf("a=%d and b=%d",a,b);
}