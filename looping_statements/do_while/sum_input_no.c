#include<stdio.h>
void main(){
    int n,sum=0;
do{
    printf("enter the n value:");
    scanf("%d",&n);
    sum+=n;
}while(n!=0);
printf("the sum of all no's is : %d",sum);
}