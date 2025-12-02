#include<stdio.h>
void main(){
    //using temp variable
    int a=5,b=9;
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("the swaped values are a=%d and b=%d",a,b);

    //without using temp variable
    int c=2,d=3;
    c=c+d;
    d=c-d;
    c=c-d;
    printf("\nthe swaped values are c=%d and d=%d",c,d);
}