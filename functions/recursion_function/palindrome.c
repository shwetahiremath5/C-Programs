#include<stdio.h>
int palindrome(int n,int rev){
if(n==0)
return rev;
return palindrome(n/10,rev*10+(n%10));

}
void main(){
    int n,rev;
    printf("enter the value:");
    scanf("%d",&n);
   rev= palindrome(n,0);
    if(rev==n)
printf("palindrome");
else
printf("not palindrome");
}