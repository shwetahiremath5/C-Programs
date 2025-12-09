#include<stdio.h>
void main(){
    int a[10],n,flag=1;  //we can also write it as -> int size=10,a[size];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int i=0;
    while(i>n){
        if(a[i]!=a[n-i]){
        flag=0;
        break;
        }
        i++;

    }
    if(flag==1)
        printf(" palindrome");
       else
       printf("not a palindrome");
}
