#include<stdio.h>

int main(){
    int t ;
    scanf("%d",&t);
    int face=0;
    for(int i=0;i<t;i++){
        char poly[15];
        scanf("%s",poly);

    if(strcmp(poly,"Tetrahedron")==0){
        face=face+4;
    }
    else if(strcmp(poly,"Cube")==0){
        face=face+6;
    }
    else if(strcmp(poly,"Octahedron")==0){
        face=face+8;
    }
    else if(strcmp(poly,"Dodecahedron")==0){
        face=face+12;
    }
    else if(strcmp(poly,"Icosahedron")==0){
        face=face+20;
    }
    }
    printf("%d",face);

return 0;

}
