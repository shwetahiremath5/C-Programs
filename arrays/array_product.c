#include<stdio.h>
void main(){
    int a[50],n,pro=1;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    {
        pro*=a[i];
    }
        printf("the sum of elements:%d",pro);
}