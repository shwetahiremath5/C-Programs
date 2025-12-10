#include<stdio.h>
#include<string.h>
void main(){
    char str[20];
    printf("enter string:");
   // scanf("%s",str); //only the  first word will be considered
   gets(str);      //entire sentence is taken input
   scanf("%s",str);
  // printf("[^\n%s",str);
   puts("\nhi shweee");
}