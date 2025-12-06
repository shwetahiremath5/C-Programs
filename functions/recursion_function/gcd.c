#include<stdio.h>
int gcd(int a,int b){
       while(a!=b){
        if(a>b)
        a=a-b;
        else
       b=b-a;
    }
    return a;
    /*while(b!=a){
        int temp=b;
        b=a%b;
        a=temp;
    }
    return a;*/
}
void main(){
    int a,b;
    printf("enter a and b:");
    scanf("%d %d",&a,&b);
    printf("the gcd of %d and %d is %d",a,b,gcd(a,b));
}