#include<stdio.h>
void main(){
    float f,c;
    printf("enter temperature in fahrenheit: ");
    scanf("%f",&f);
    c=(f-32)*5/9;
    printf("temperature in celsius=%.3f",c);
}