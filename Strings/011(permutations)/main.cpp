/*Print all permutations of the given string*/
/*#include <bits/stdc++.h>
using namespace std;
void permute(string s,int l,int r){
   if(l==r) cout<<s<<endl;
    else{
        for(int i=l;i<=r;i++){
        swap(s[l],s[i]); //find combinations
        permute(s,l+1,r);
         swap(s[l],s[i]); //backtracking
    }
    }
}

int main()
{
    string s="120";
    //cin>>s;
    permute(s,0,s.size()-1);
   return 0;
}*/
/*Print smallest permutations of the given number which does not start from zero*/
#include <bits/stdc++.h>
using namespace std;
int min1=INT_MAX;
void permute(string s,int l,int r){
   if(l==r) {
    int x=stoi(s);
    if(s[0]!='0') min1=min(min1,x);
   }
    else{
        for(int i=l;i<=r;i++){
        swap(s[l],s[i]); //find combinations
        permute(s,l+1,r);
         swap(s[l],s[i]); //backtracking
    }
    }
}

int main()
{
    string s="120";
    //cin>>s;
    permute(s,0,s.size()-1);
    cout<<min1;
   return 0;
}
