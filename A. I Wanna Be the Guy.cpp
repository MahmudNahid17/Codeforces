#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int>level;
    vector<int>arr(p);
    for(int i=0;i<p;i++){
        cin>>arr[i];
        level.insert(arr[i]);

    }
    int q;
    cin>>q;
    vector<int>ar(q);
    for(int j=0;j<q;j++){
        cin>>ar[j];
        level.insert(ar[j]);
    }
    if(level.size()==n){
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

return 0;

}
