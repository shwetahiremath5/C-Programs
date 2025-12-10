#include<stdio.h>
void main(){
    char a[]="hello";
    for(int i=0;i<5;i++)
    printf("%c",a[i]); 

printf("\n");

    char b[]="college wallah\0"; //if u haven't written \0 then also fine it is implicitly taken if not
    int i=0;
     while(b[i]!='\0'){
      printf("%c",b[i]); 
        i++;
     }

     printf("\n%c\n",b[5]);
          printf("%d\n",b[5]);



}