#include<stdio.h>
int main(){
    int n ;
    printf("enter the value of n:");
    scanf("%d ",&n);
    int i=2;
    while (i<n){
        if(n % i == 0){
    printf("%d is not prime",n);
    return 0;
    }
    i++;
}
printf("%d is prime",n);
return 0;
}