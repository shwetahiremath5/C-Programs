#include<stdio.h>
#include<string.h>
void main(){
    char s1[]="shweta";
    char *s2=s1;
    printf("%s\n",s2);
    //lets change in s1
    s1[5]='u';
    //s1[6]='u';
    printf("%s",s2);
}