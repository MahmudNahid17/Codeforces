#include<stdio.h>

int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    int prod=a*b;
    if(prod%2==0){
       printf("%d",prod/2);
    }
    if(prod%2!=0){
       printf("%d",prod/2);
    }
return 0;

}
