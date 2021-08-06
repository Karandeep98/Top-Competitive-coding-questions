#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n][n];
    int rd=0,ld=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<n;i++){
       ld+=a[i][i];
    }
    for(int i=0;i<n;i++){
       rd+=a[n-1-i][i];
    }
    cout<<abs(rd-ld);
    return 0;
}
