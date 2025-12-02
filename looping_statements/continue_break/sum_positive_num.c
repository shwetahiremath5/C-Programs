#include<stdio.h>
int main(){
    int n,sum=0;
    do{
    printf("enter the no : ");
    scanf("%d",&n);
    if(n<0) 
    continue;
    sum+=n;
    } while(n!=0);
printf("sum is : %d",sum);
    return 0;
}