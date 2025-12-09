#include<stdio.h>
void main(){
    int n[26],temp;
    n[0]=100;
    n[25]=200;
    temp=n[25];
    n[25]=n[0];
    n[0]=temp;
    printf("\n%d\n%d",n[0],n[25]);
}