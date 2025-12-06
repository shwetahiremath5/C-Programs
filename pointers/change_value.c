#include<stdio.h>
void main(){
    int a=2,*n=&a;
     printf("a=%d",a);
    *n=878;
    //printf("a=%d",a);
    printf("\nchanged value:%d",*n);
}