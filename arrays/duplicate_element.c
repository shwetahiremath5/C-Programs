#include<stdio.h>
void main(){
    int a[50],n,x,count=0;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
        if(a[i]==a[j]){
        printf("duplicate element is %d",a[i]);
        break;
    }
  }
 }
}