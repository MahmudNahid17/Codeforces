#include<bits/stdc++.h>
using namespace std;

 int main(){
     int t;
     cin>>t;
     int cnt=0;
     string first="",second="";
     while(t--){
            cin>>second;
            if(first!=second){

                cnt++;
                first=second;


            }

     }
     cout<<cnt<<endl;

 return 0;

 }
