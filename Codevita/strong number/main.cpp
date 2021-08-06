#include <iostream>

using namespace std;
int fact(int n){
    if(n==0||n==1) return 1;
    return n*fact(n-1);
}
int main()
{
    int n;
    cin>>n;
    int num=n;
    int sum=0;
    while(n>0){
        int r=n%10;
        sum+=fact(r);
        n/=10;
    }
    if(num==sum) cout<<"Strong number";
    else cout<<"Not a strong number";
    return 0;
}
