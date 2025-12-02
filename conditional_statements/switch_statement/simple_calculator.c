#include<stdio.h>
void main(){
    float a,b;
    int choice;
    printf("enter two no's:");
    scanf("%f %f",&a,&b);
    while(1){
    printf("\n1.Addition \n2.subtraction\n3.multiplication\n4.Division\n5.Reminder\n");
    printf("enter your choice:");
    scanf("%d",&choice);
    switch(choice){
        case 1:printf("\n%f\n",a+b);
        break;
        case 2:printf("\n%f\n",a-b);
        break;
        case 3:printf("\n%f\n",a*b);
        break;
        case 4:printf("\n%f\n",a/b);
        break;
        case 5:printf("\n%f\n",(int)a%(int)b); //because '%' operator does not support float operator so explicitly convert into integer
        break;
        default:printf("enter valid choice");
    }
    }
}
            
