#include<stdio.h>
void main(){
    int n;
    printf("enter the no:");
    scanf("%d",&n);
    int reverse=0;
    int copy=n;
    while(n>0){
        reverse=(reverse*10)+(n%10);
        n/=10;
    }
    if(reverse==copy)
    printf("the reverse of %d is palindrome",copy);
    else
    printf("not palindrome");
}