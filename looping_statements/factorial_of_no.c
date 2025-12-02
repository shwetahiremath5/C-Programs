#include<stdio.h>
void main(){
    int n, fact=1;;
    printf("enter a no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    printf("the factorial of no %d is %d",n,fact);

}