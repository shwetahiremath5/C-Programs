#include<stdio.h>
void main(){
    int n;
    printf("enter a no:");
    scanf("%d",&n);
   // for(int i=1;i<=10;i++)
  //  printf("\n%d",i*n);

    for(int i=n;i<=i*10;i+=n)
    printf("%d ",i);
}