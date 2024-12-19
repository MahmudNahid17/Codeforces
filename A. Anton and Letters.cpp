#include<bits/stdc++.h>
using namespace std;

int main(){
    set<char>letter;
    string s;
    getline(cin,s);// getline uses for taking input all element untill 
                    // a new line is encountered

    for(char ch: s){
        if(isalpha(ch)){ //isalpha reads only the letter type charecter
                        // no special digt ,words,symbols will not include in isalpha
            letter.insert(ch);
        }
    }
    cout<<letter.size()<<endl;

return 0;

}
