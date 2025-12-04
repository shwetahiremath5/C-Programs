#include<stdio.h>
float larger(float a,float b){
    if(a>b)
    return a;
    else 
    return b;
}
void main(){
    float a,b;
    printf("enter two no's:");
    scanf("%f %f",&a,&b);
    printf("the larger value is :%f",larger(a,b));
}