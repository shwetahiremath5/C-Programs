#include<stdio.h>
void main(){

    /*find total no of triplets in given
    array whose sum is equal to a given no x */
    //hint: pattern printing - nested loops

    int a[50],n,x,count=0;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
     printf("enter the element x:");
    scanf("%d",&x);
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
            if(a[i]+a[j]+a[k]==x){
            count++;
            printf("(%d,%d,%d)\n",a[i],a[j],a[k]);
            }
        }
        }
    }
        printf("the no of triplets:%d",count);
}