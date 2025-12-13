#include<stdio.h>
#include<string.h>
void main(){
    //string length
    char str[]="shweta";
    int x=strlen(str);
    printf("%d\n",x);

    //string copy
    char s1[]="annapurna";
    char s2[50];
    strcpy(s2,s1);
    printf("%s\n",s2);

    //string concatinate
    char str1[]="shweta ";
    char str2[]="hiremath";
    strcat(str1,str2);
    printf("%s\n",str1);

    //string compare
    if(strcmp(s1,str1))
    printf("equal");
    else
    printf("%s and %s are not equal",s1,str1);
    
}