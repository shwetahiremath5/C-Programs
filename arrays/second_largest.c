#include<stdio.h>
void main(){
    int a[50],n;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    int max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]>max)
        max=a[i];
    }
    int secmax=a[0];
    for(int i=0;i<n;i++){
        if(a[i]<max&&a[i]>secmax)
        secmax=a[i];
    }
        printf("the second max element:%d",secmax);
}