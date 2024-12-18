#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int p;
    cin>>p;
    set<int>level;// here set is a function for store distinct numbers.
    vector<int>arr(p);
    for(int i=0;i<p;i++){
        cin>>arr[i];
        level.insert(arr[i]); // p array er evry single elemt input niye set function a insert kore dici.

    }
    int q;
    cin>>q;
    vector<int>ar(q);
    for(int j=0;j<q;j++){
        cin>>ar[j];
        level.insert(ar[j]);// q array er every single elemnt k input nye set function a insert kore dici.
    }
    if(level.size()==n){ // set function a p,q er elment gula distinct vabe store hwar por seta k n er sathe comparison koreci
        cout<<"I become the guy."<<endl;
    }
    else{
        cout<<"Oh, my keyboard!"<<endl;
    }

return 0;

}
