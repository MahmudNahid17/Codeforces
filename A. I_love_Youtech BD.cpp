#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int mx=arr[0];
    int mn=arr[0];

    for(int i=0;i<n;i++){
        if(arr[i]>mx){
            mx=arr[i];
            cnt++;
        }
        if(arr[i]<mn){
             mn=arr[i];
             cnt++;
        }
    }

    cout<<cnt<<endl;
return 0;
}
