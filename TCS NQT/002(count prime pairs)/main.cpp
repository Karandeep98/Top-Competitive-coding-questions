#include <bits/stdc++.h>
using namespace std;
bool check(int n){
    for(int i=2;i<=n/2;i++){
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    int l,h;
   cin>>l>>h;
   vector<int> prime;
   int count=0;
   unordered_map<int,bool> mp;
   for(int i=l;i<=h;i++){
    if(check(i)) {
            prime.push_back(i);
            mp[i]=true;
    }
   }
   for( auto i: mp){
    cout<<i.first<<":"<<i.second<<endl;
   }
   for(int i=0;i<prime.size();i++){
    if(mp[prime[i]+6]) count++;
   }
   cout<<count;
    return 0;
}
