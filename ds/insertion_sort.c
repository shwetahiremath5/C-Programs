#include<stdio.h>
void main(){
    int i,j,key,arr[10],n;
    printf("enter the size of array:");
    scanf("%d",&n);
    printf("enter array elements:");
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    for(i=1;i<n;i++){
        key=arr[0],j=i-1;
        while(j>=0&&arr[j]>key){
        arr[j+1]=arr[j];
        j--;
    }
    arr[j+1]=key;
    }
    for(int i=0;i<n;i++){
        printf("%d  ",arr[j]);
    }
}