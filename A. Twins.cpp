#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;cin>>n;
    vector<int>arr(n);
    int tsum=0;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        tsum+=arr[i];
     }
    sort(arr.rbegin(),arr.rend());

    int mysum=0,cointaken=0;
    for(int j=0;j<n;j++){
        mysum+=arr[j];
        cointaken++;

        if(mysum>tsum-mysum){
           break;
     }
    }

    cout<<cointaken<<endl;
return 0;
}
