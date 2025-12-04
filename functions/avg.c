#include<stdio.h>
float avg(int a,int b,int c){
    return (a+b+c)/3.0;
}
void main(){
    int a,b,c;
    printf("enter any 3 no:");
    scanf("%d %d %d",&a,&b,&c);
    //avg(a,b,c);
    printf("the avg is :%f",avg(a,b,c));
}