#include <bits/stdc++.h>
using namespace std;

void duplicate(string s,int count[]){
    for(int i=0;i<s.size();i++){
        count[(int)s[i]]++;
    }
}

int main()
{
  string s="abcdabcddcbsdcba";
  int count[256]={0};
  duplicate(s,count);
  for(int i=0;i<256;i++){
    if(count[i]>1){
        cout<<(char) i<<","<<count[i]<<endl;
    }
  }
    return 0;
}
