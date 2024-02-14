#include<stdio.h>


int main(){
    int n;
    scanf("%d",&n);
    for(int i=n+1;;i++){
        int temp=i;
        int a=temp%10;
        temp=temp/10;
        int b=temp%10;
        temp=temp/10;
        int c=temp%10;
        temp=temp/10;
        int d=temp;
        if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
            printf("%d",i);
            break;
        }


    }



}
