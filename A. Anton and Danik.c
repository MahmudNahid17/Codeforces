#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    int cnta=0;
    int cntd=0;
        char str[100000];
        scanf("%s",str);
        for(int j=0; j<t;j++){
            if(str[j]=='A'){
                cnta++;
            }
            if(str[j]=='D'){
                cntd++;
            }

        }
         if(cnta>cntd){
            printf("Anton\n");
        }
         else if(cntd>cnta){
            printf("Danik\n");
        }
        else if(cnta==cntd){
            printf("Friendship\n");

        }
 return 0;

    }




