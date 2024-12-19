#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
         int n,m;
         cin>>n>>m;

         vector<int>v;

         for(int i=0;i<n;i++){
             string s;
             cin>>s;
             int x=s.size();
             v.push_back(x);

         }

         int cnt=0;
         for(int i=0;i<v.size();i++){
             m=m-v[i];
             if(m<0)
                break;
                cnt++;
         }
            cout<<cnt<<endl;
         }
return 0;
    }



