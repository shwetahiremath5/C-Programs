#include<stdio.h>
int square(int a){
    return a*a;
}
void main(){
    int n;
    printf("enter the value:");
    scanf("%d",&n);
    printf("the square if no is: %d",square(n));
}