#include<stdio.h>
#include<stdlib.h>
typedef struct {
    char *day;
    int date;
    char *act;
}Day;
void create(Day *week,int n){
    for(int i=0;i<n;i++){
        week[i].day=(char*)malloc(n*sizeof(char));
        week[i].act=(char*)malloc(n*sizeof(char));
    }
}
void read(Day *week,int n){
    for(int i=0;i<n;i++){
        printf("enter the name of day %d",i+1);
        scanf("%s",week[i].day);
        printf("enter the date:");
        scanf("%d",&week[i].date);
        printf("enter the activity of day:");
        scanf("%s",week[i].act);
    }
}
void display(Day *week,int n){
    printf("the details are:\n");
    for(int i=0;i<n;i++){
        printf("day:%s \ndate:%d\nactivity:%s",week[i].day,week[i].date,week[i].act);
    }
}
void main(){
    int n;
printf("enter the size :");
scanf("%d",&n);
Day *week=(Day*)malloc(n*sizeof(Day));
create(week,n);
read(week,n);
display(week,n);
for(int i=0;i<n;i++){
    free(week[i].day);
    free(week[i].act);
}
free(week);
}