#include<stdio.h>


int main(){
    char str[20];
    scanf("%s",str);
    int count=0;
    for(int i=0; str[i]!='\0';i++){
        if(str[i]=='4' || str[i]=='7'){
            count++;
        }


    }
     if(count==4 || count == 7){
            printf("YES\n");
        }
        else
            printf("NO\n");

return 0;



}



