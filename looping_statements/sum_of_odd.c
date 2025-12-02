#include<stdio.h>
void main(){
    int n,sum=0;
    printf("enter a no:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        if(i%2!=0)
        sum+=i;
    }
    printf("sum of odd no's is : %d",sum);
}