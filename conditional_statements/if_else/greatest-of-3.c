#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter first value:");
    scanf("%d",&a);
    printf("enter second value:");
    scanf("%d",&b);
    printf("enter third value:");
    scanf("%d",&c);
    if(a>b){
        if(a>c)
        printf("a is greatest");
        else
        printf("c is greatest");
    }
    else if(b>c)
    printf("b is greatest");
    else 
    printf("c is greatest");
}