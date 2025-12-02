#include<stdio.h>
void main(){
    char fname[40];
    char lname[50];
    int age;
    printf("enter first name:");
    scanf("%s",&fname);
    printf("enter last name:");
    scanf("%s",&lname);
    printf("enter the age :");
    scanf("%d",&age);
    printf("the name is:%s %s",fname,lname);
    printf("\nage:%d",age);
}