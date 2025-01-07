#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt=0;

    int home[31],guest[31];

    for(int i=0;i<n;i++){
        cin>>home[i]>>guest[i];

    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(home[i]==guest[j]){
                cnt++;
            }
        }
    }

    cout<<cnt<<endl;

return 0;
}
