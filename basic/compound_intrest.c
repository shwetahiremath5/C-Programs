#include<stdio.h>
#include<math.h>  //you can also use <stdlib.h> also
void main(){
    float p,t,r;
    printf("enter the principle value:");
    scanf("%f",&p);
    printf("enter the time:");
    scanf("%f",&t);
    printf("enter the rate of intrest:");
    scanf("%f",&r);
    printf("compound intrest is:%f",p*pow((1+r/100),t));
}