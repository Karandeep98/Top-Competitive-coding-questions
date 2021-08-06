#include <bits/stdc++.h>

using namespace std;

int main()
{
   vector<string> v;
   int blank=0;
   string x;
   while(1){
    cin>>x;
    if(x=="q")break;
    else if(x=="-") blank++;
    else v.push_back(x);
   }
   cout<<"BLANK KEYS:"<<blank<<endl;
   cout<<"TOTAL KEYS:"<<v.size()+blank<<endl;
   cout<<"NUMBER OF LOCKS:"<<v.size()<<endl;
    return 0;
}
