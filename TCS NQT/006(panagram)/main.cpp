#include <bits/stdc++.h>
using namespace std;
string check(string s){
    unordered_map<char,bool> mp;
    for(int i=0;i<s.length();i++){
        mp[tolower(s[i])]=true;
    }
    for(char i='a';i<='z';i++){
        if(!mp[i]) return "Not Panagram";
    }
    return "Panagram";
}
int main()
{
    string s;
    getline(cin,s);
    cout<<check(s);
    return 0;
}
