#include<stdio.h>

/* when we pass an array it is passed by reference 
so the value is changed after calling function */


void fun(int a[]){
    int temp=a[0];
    a[0]=a[1];
    a[1]=temp;
}
void main(){
    int a[2]={1,23};
    printf("%d %d\n",a[0],a[1]);
    fun(a);
    printf("%d %d",a[0],a[1]);
}