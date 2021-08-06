#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector<string> v;
    string a;
    while(1){
        cin>>a;
        if(a=="q")break;
        v.push_back(a);
    }
    if(v.size()<3 || v.size()>12) cout<<"Invalid Entries";
    int count=0;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            count++;
        }
    }
    cout<<"Total Matches: "<<count<<endl;
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            cout<<v[i]<<"-VS-"<<v[j]<<endl;
        }
    }
    return 0;
}
