#include<stdio.h>
int main(){
    int n;
    while (1)
    {
printf("\nenter the no: ");
scanf("%d",&n);
if(n==-1) break;
printf("the square of %d is %d",n,n*n);
   }
    
    return 0;

}