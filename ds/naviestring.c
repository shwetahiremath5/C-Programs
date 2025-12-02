#include<stdio.h>
#include<stdlib.h>
char str[100],pat[50],rep[40],ans[50];
int i,j,c,m,k,flag=0;
void stringmatch(){
    i=j=c=m=k=0;
    while(str[c]!='\0'){
        if(str[m]==pat[i]){
            i++,m++;
            if(pat[i]!='\0'){
                flag=1;
                for(k=0;rep[k]!='\0',k++,j++;){
                ans[j]=rep[k];
                }
                i=0,c=m;
            }
        }
        else{
            ans[j]=str[c];
            j++,c++;
            m=c;
        }
         ans[j]='\0';
    }
   
}
void main(){
    printf("enter a string\n");
    scanf("%s",&str);
    printf("enter a pattern string:");
    scanf("%s",&pat);
    printf("enter a replace string:");
    scanf("%s",&rep);
   stringmatch(str,pat,rep);
    if(flag==1)
    printf("the resultant string is :%s",ans);
    else
    printf("pattern string nor found");
}