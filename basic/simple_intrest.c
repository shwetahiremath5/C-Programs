#include<stdio.h>
void main(){
    float p,t,r;
    printf("enter the principle value:");
    scanf("%f",&p);
    printf("enter the time:");
    scanf("%f",&t);
    printf("enter the rate of intrest:");
    scanf("%f",&r);
    printf("the simple intrest is:%f",(p*t*r)/100);
}