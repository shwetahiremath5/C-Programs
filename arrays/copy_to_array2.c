#include<stdio.h>
void main(){

    // copy in reverse order

    int a[10],b[39],n;  //we can also write it as -> int size=10,a[size];
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the array elements:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++)
    b[i]=a[i];
    printf("array elements are:\n");
for(int i=n;i>=0;i--){
    printf("%d\n",b[i]);
}
}