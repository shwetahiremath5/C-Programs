#include<stdio.h>
void main(){
    int m;
    printf("enter marks:");
    scanf("%d",&m);
    if(m>90)
    printf("A grade");
    else if(m>75)
    printf("B grade");
    else if(m>60)
    printf("C grade");
    else if(m>30)
    printf("D grade");
    else 
    printf("F grade");
}