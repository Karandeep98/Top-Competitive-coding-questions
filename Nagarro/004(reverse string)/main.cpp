#include <bits/stdc++.h>
using namespace std;
string reverse(string str){
    vector<string> v;
    string x="";
    for(int i=0;i<str.length();i++){
        if(str[i]!=' '){
            x+=str[i];
        }
        else {
                v.push_back(x);
                x="";
        }
        if(i==str.length()-1){
            v.push_back(x);
                x="";
        }
    }
    cout<<"size="<<v.size();
    reverse(v.begin(),v.end());
    for(string a: v){
        x+=a;
        x+=" ";
    }
    return x;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<reverse(s);

    return 0;
}
