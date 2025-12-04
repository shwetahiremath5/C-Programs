#include<stdio.h>
void increment(int n){
    n++;
    printf("incremented in function:%d",n);
}
void main(){
    int n ;
    printf("enter the no :");
    scanf("%d",&n);
    increment(n);
    printf("\nvalue in the main function:%d",n);
}