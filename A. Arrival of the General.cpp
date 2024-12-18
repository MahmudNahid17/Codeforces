#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    int mx=0,mn=101,maxi,mini;

    vector<int>height(n);
    for(int i=0;i<n;i++){
        cin>>height[i];

    if(height[i]>mx){
        mx=height[i];
        maxi=i;
    }
    if(height[i]<=mn){
        mn=height[i];
        mini=i;
    }
}
    if(maxi>mini){
        mini++;
    }
    cout<<maxi+(n-1)-mini<<endl;

 return 0;

}
