#include <bits/stdc++.h>
using namespace std;

bool check(int n){
    unordered_map<int,int> mp;
    int r;
    while(n>0){
        r=n%10;
        mp[r]++;
        n/=10;
    }
    for(auto i: mp){
        cout<<i.first<<":"<<i.second<<endl;
        if(i.second>1) return false;
    }
    return true;
}
int main()
{
   int l,h;
   cin>>l>>h;
   int count=0;
   for(int i=l;i<=h;i++){
        cout<<"iteration:"<<i<<endl;
    if(check(i)) count++;
   }
   if(count==0) cout<<"No Unique Number!";
   else cout<<count;
    return 0;
}
