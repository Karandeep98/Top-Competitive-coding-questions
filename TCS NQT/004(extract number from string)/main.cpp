#include <bits/stdc++.h>
using namespace std;
bool check(string s){
    for(int i=0;i<s.size();i++){
        if(s[i]=='9') return false;
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    vector<string> v;
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]!=' '){
            str+=s[i];
        }
        if(i==s.size()-1 || s[i]==' '){
            v.push_back(str);
            str="";
        }
    }
    int largest=INT_MIN;
    vector<int> vint;
    for( auto a: v){
            if(a[0]>='0'&&a[0]<='9'){
                if(check(a)) vint.push_back(stoi(a));
            }
    }

    for(auto a: vint){
        largest = max(largest,a);
    }
    cout<<largest;
    return 0;
}
