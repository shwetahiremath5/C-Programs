
/* armstrong no is sum of cube of all 
the no's must be equal to original no
eg: 153 370 371 407 */


#include<stdio.h>
void main(){
    int n,original,remainder,sum=0;
    printf("enter the value:");
    scanf("%d",&n);
    original=n;     // ninu n gi copy madilla andra last ali compare madlaka n erala modify agirdata
    while(original>0){
        remainder=original%10;
        sum+=remainder*remainder*remainder;
        original/=10;
    }
    if(sum==n){
        printf("%d is armstrong no.",n);
    }
    else
    printf("not a armstrong no ");
}

//using for loop

original=n;
for( ;original!=0;i/10){
    remainder=original%10;
    sum+=remainder *remainder*remainder;
}
