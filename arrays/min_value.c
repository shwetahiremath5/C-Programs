#include<stdio.h>
void main(){
    int a[50],n,min=a[0];
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        if(a[i]<min)
        min=a[i];
    }
        printf("the min element:%d",min);
}