#include<stdio.h>
void main(){
    int m;
    printf("enter the score:");
    scanf("%d",&m);
    m>80?printf("High"):(m>50?printf("Moderate"):printf("Low"));
}