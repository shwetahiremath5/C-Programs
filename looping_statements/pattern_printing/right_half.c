#include<stdio.h>
void main(){
    int n;
    printf("enter the value of n:");
    scanf("%d",&n);

    printf("right half pyramid\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }

    printf("reverse right half pyramid\n");
    for(int i=0;i<n;i++){          // for(int i=n;i>0;i--)
        for(int j=0;j<n-i;j++)     // for(int j=0;j<=i;j++)
        printf("*");
        printf("\n");
    }

    printf("left half pyramid\n ");
    for(int i=0;i<n;i++){
        for(int k=0;k<n-i-1;k++){
        printf(" ");
        }
        for(int j=0;j<=i;j++){
        printf("*");
        }
        printf("\n");
    }
}