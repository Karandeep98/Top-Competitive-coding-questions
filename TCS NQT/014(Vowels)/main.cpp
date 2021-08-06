#include <bits/stdc++.h>

using namespace std;

int main()
{
   string s;
    bool status=true;
   getline(cin,s);
   if(s.size()==0) {
    status=false;
    cout<<"INVALID INPUT";
   }
   unordered_map<char,int> mp;
   string x="";
   char ch;

   for(int i=0;i<s.size();i++){
        ch=tolower(s[i]);
   if(ch=='a'||ch=='e'||ch=='o'||ch=='u'||ch=='i') mp[s[i]]++;
   else x+=s[i];
   if(ch>='0'&& ch<='9') status=false;
   }
   if(status){
   cout<<"a : "<<mp['a']<<endl;
   cout<<"e : "<<mp['e']<<endl;
   cout<<"i : "<<mp['i']<<endl;
   cout<<"o : "<<mp['o']<<endl;
   cout<<"u : "<<mp['u']<<endl;
   cout<<x;
   }
   else cout<<0;
    return 0;
}
