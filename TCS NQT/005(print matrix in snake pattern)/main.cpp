#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int m[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>m[i][j];
        }
    }
    int dir=0,i=0;
    while(i<n){
        if(dir==0){
       for(int j=0;j<n;j++)
        cout<<m[i][j]<<" ";
        dir=1;
        }
        else if(dir==1){
           for(int j=n-1;j>=0;j--)
            cout<<m[i][j]<<" ";
        dir=0;
        }
        i++;
    }
    return 0;
}
