#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,odd=0,even=0;
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
        if(arr[i]%2==0){
            even++;
        }
        else
            odd++;
    }

        if(even>odd){
            for(int i=0;i<n;i++){
                if(arr[i]%2!=0){
                    cout<<i+1<<endl;
                    break;
                }

            }
        }
        if(odd>even){
            for(int i=0;i<n;i++){
                if(arr[i]%2==0){
                    cout<<i+1<<endl;
                    break;
                }

            }
        }
return 0;

    }



