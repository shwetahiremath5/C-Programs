#include<stdio.h>
void main(){
    int a=4;
    int *s=&a;            // int* -> int ka address store karta hai
    printf("%p",s);
    printf("\n%p",&s);
    printf("\n%d",*s);
    *s=5;     // s is changed
     printf("\n%d",*s);
     printf("\n%p",s); //address of previous a only not the changed one   
     printf("\n%p",&s); // address of same pointer 
    int **y=&s;         // int** -> int* ka address store karta hai
    printf("\n%d\n",a);
    printf("%d\n",*s);
    printf("%d\n",**y);
    }