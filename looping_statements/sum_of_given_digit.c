#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a no:");
    scanf("%d",&n);
    int copy=n;  //copy n to 'copy' so n remains unchanged
    while(n>0){
        sum+=n%10;
        n /=10;
    }
    printf("the sum of '%d' is: %d",copy,sum);
}