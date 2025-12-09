#include<stdio.h>
void main(){
    int a[50],n,x,count=0;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter the element x:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]==x)
     printf("the element is present at index:%d",i);

    }
}