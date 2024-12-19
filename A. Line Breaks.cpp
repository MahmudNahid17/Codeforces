#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
         int n,m; // n holo word er sonkha.
         cin>>n>>m; // m holo string er maximum length jeta m er moddhe store kora jabe.

         vector<int>v;

         for(int i=0;i<n;i++){
             string s;
             cin>>s;
             int x=s.size();
             v.push_back(x); // string er size ta store kora hoyece v er moddhe .

         }

         int cnt=0;
         for(int i=0;i<v.size();i++){
             m=m-v[i];  // m means strip er sei maximum length jeta m er moddhe exactly fit hobe 
             if(m<0)
                break;
                cnt++;
         }
            cout<<cnt<<endl;
         }
return 0;
    }



