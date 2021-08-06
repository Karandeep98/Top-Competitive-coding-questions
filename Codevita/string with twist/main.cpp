#include <iostream>

using namespace std;
bool isvowel(char ch){
  if(tolower(ch)=='a' ||tolower(ch)=='e' ||tolower(ch)=='i' ||tolower(ch)=='o' ||tolower(ch)=='u') return true;
  else return false;
}
int main()
{
   string a,b,c;
   cin>>a>>b>>c;
   //cout<<a<<b<<c;
    for(int i=0;i<a.size();i++){
       if(isvowel(a[i])) a[i]='%';
    }
    for(int i=0;i<b.size();i++){
      if(!isvowel(b[i])) b[i]='#';
    }
    for(int i=0;i<c.size();i++){
        c[i]=toupper(c[i]);
    }
    cout<<a<<b<<c;
    return 0;
}
