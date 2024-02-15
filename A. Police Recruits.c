#include<stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int count=0,police=0;
    int array[n];
    for(int i=0;i<n; i++){
        scanf("%d",&array[i]);

    }
    for( int i=0;i<n;i++){
        if(array[i]>0){
            police=police+array[i];
        }
        else{
           if(police>0){
             police--;
           }
           else{
            count++;
           }
        }

    }
    printf("%d",count);



}
