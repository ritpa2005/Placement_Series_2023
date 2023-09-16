#include <iostream>
#include <string.h>
using namespace std;

string reverse(string s){
    string s1;
    for(int i=s.length()-1; i>=0; i--){
        s1 += s[i];
    }
    return s1;
}
string lineReverse(string s){
    string s1,s2;
    for(int i=0; i<s.length(); i++){
        if(s[i]!=' ') s1 += s[i];
        else{
            if(s2.empty()) s2 = s2 + reverse(s1) + ' ';
            else s2 = s2 + reverse(s1);
            s1 = ' ';
        }
    }
    if(s2.empty()) s2 = s2 + reverse(s1) + ' ';
    else s2 = s2 + reverse(s1);
    return s2;
}
int main(){
    string sn,sr;
    getline(cin,sn);
    sr = lineReverse(sn);
    cout<<sr;
    return 0;
}