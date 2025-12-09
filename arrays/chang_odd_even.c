#include<stdio.h>
void main(){
    int a[50],n;
    printf("enter the size of elements:");
    scanf("%d",&n);
    printf("enter array elements :");
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    printf("the elements are:\n");
    for(int i=0;i<n;i++){
      if(i%2==0){
        a[i]+=10;
      }
      else{
        a[i]*=2;
      }
    printf("%d\n",a[i]);
}
    }
