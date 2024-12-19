#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char>letter;
    string s;
    getline(cin,s);

    for(char ch: s){
        if(isalpha(ch)){
            letter.insert(ch);
        }
    }
    cout<<letter.size()<<endl;

return 0;

}
