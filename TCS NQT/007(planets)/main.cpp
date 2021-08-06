#include <bits/stdc++.h>
using namespace std;

int main()
{
   int t;
   cin>>t;
   double r1,r2,r3,v1,v2,v3,n,rev1,rev2,rev3;
   while(t--){
    cin>>r1>>r2>>r3;
    cin>>v1>>v2>>v3;
    cin>>n;
    rev1=(v1*n)/360;
    rev2=(v2*n)/360;
    rev3=(v3*n)/360;
    if(rev1-floor(rev1)==rev2-floor(rev2) && rev1-floor(rev1)==rev3-floor(rev3)) cout<<"TRUE\n";
    else cout<<"FALSE\n";
   }
    return 0;
}
