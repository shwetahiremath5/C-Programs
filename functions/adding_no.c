#include<stdio.h>
int add(int a,int b,int c,int d){
    return a+b+c+d;
}
void main(){
    int a,b,c,d;
    printf("enter four no: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("the sum of four no is: %d",add(a,b,c,d));
}