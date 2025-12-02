#include<stdio.h>
void main(){
    int i,j,key,a[203],n;
    printf("enter the size of array");
    scanf("%d",&n);
    printf("enterr the array elements:");
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++){
       key= a[i];
       j=i-1;
    while(j>=0 && a[j]>key){
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=key;
}
for(i=0;i<n;i++)
printf("\nsorted array is: %d",a[i]);
}