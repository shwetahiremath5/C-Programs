#include<stdio.h>
void main(){
    char a,*n=&a;
    printf("enter a char:");
    scanf("%c",&a);
    printf("the character u entered is: %c",*n);
}