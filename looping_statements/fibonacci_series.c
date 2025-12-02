#include<stdio.h>
void main(){
    int fib(int n){
        if(n==0||n==1)
        return n;
        else
        return fib(n-1)+fib(n-2);
    }
    int n ;
    printf("enter the value of n:");
    scanf("%d",&n);
    printf("the fibonacci series is :");
    for(int i=0;i<n;i++){
        printf("%d ",fib(i));

    }
}