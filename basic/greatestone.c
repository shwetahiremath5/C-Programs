#include<stdio.h>
void main(){
    int a,b,c;
    printf("enter three no:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("a:%d is greater",a);
        else
        printf("c:%d is greater",c);
    }
    else if(b>c)
    printf("b:%d is greater",b);
    else 
    printf("c:%d is greater",c);
}