#include<stdio.h>
void main(){

    /*count the no. of elements in given
    array greater than a given no x */

    int a[50],n,x,count=0;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter the element x:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        if(a[i]>x)
        count++;
    }
        printf("the no of elements:%d",count);
}