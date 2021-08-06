//program to print permutations of a string.
//example for ABC answer is abc,acb,bac,bca,cab,cba
#include <bits/stdc++.h>
using namespace std;
vector<string> v;
void permute(string s,int l,int r){
    if(l==r){
        v.push_back(s);
    }
    else{
        for(int i=l;i<=r;i++){
            swap(s[l],s[i]);
            permute(s,l+1,r);
            swap(s[l],s[i]);
        }
    }
}
int main()
{
    string s;
    cin>>s;
    permute(s,0,s.size()-1);
    set<string> se(v.begin(),v.end()); //To remove duplicate entries in case of input like abb and acc
    for(auto i: se){
        cout<<i<<endl;
    }
    return 0;
}
