#include<stdio.h>
#include<string.h>


int main(){
    char str1[101];
    char str2[101];
    scanf("%s%s",str1,str2);
    int len1=strlen(str1);
    int len2=strlen(str2);
    int rev=strrev(str1);
    //printf("%d\n",rev);

    int compare=strcmp(rev,str2);

    //if(str1==rev){
    if(compare==0){
        printf("YES\n");
    }
    else{
        printf("NO\n");
        }

return 0;

}
