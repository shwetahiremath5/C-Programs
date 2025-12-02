#include<stdio.h>
void main(){
    int a,b;
    printf("enter two nos:");
    scanf("%d %d ",&a,&b);
    // subtraction method
    while(a!=b){
        if(a>b)
        a=a-b;
        else
        b=b-a;
    }
    // euclidean method
   /* while(b!=a){
        int temp=b;
        b=a%b;
        a=temp;
    }*/
    printf("the gcd is: %d",a); // u can also give b in the printf statement
}

//recursive function
/*int gcd(int a,int b){
    if(b==0)
    return 0;
    return gcd(b,a%b);   //euclidean algorithm
}*/