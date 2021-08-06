#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
   int a=1,b=1;
   if(n==1||n==2) cout<<endl<<1;
   if(n>=2){
    cout<<1<<" "<<1<<" ";
   }
   for(int i=2;i<n;i++){
    if(i%2!=0){
        b*=3;
        cout<<b<<" ";
        if(i==n-1) cout<<endl<<b;
    }
    else {
        a*=2;
        cout<<a<<" ";
        if(i==n-1) cout<<endl<<a;
    }
   }
    return 0;
}
