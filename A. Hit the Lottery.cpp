#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    int bill,left;

    bill=n/100;
    left=n%100;

    bill=bill +left/20;
    left= left%20;

    bill=bill +left/10;
    left=left%10;

    bill=bill +left/5;
    left=left%5;

    bill =bill +left/1;
    left=left%1;

   cout<<bill<<endl;
return 0;

}
