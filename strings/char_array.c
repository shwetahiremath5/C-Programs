#include<stdio.h>
void main(){
    char a[]={'h','e','l','l','0'};
    for(int i=0;i<5;i++)
    printf("%c",a[i]); 

    char b[]={'h','e','l','l','0','\0'};
    int i=0;
    while (b[i]!='\0')
    {
        printf("-- %c ",b[i]); 
        i++;
    }
         printf("\n%c\n",b[3]);
         printf("%d\n",b[3]);


}