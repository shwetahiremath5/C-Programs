#include<stdio.h>
void main(){
    float r,pi=3.14,a;
    printf("enter the radius of circle:");
    scanf("%f",&r);
    a=pi*r*r;
    printf("area of circle is :%f",a);
    printf("\ncircumference of circle is:%f",2*pi*r);

}