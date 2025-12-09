#include<stdio.h>
void main(){
    int a[10],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter the  marks of student:");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
    if(a[i]<35)
    printf("roll no:%d\n",i);
}
}