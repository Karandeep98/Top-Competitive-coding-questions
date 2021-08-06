#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m,r;
    cin>>n>>m>>r;
    vector<vector<int>> v(n,vector<int> (m));
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>v[i][j];
        }
    }
    int top=0,bottom=n-1,left=0,right=m-1,dir=0;
    int x;
    if(dir==0){
            x=v[top][0];
        for(int i=0;i<m-1;i++){
            v[top][i]=v[top][i+1];
        }
        dir==1;
    }
    if(dir==1){
        v[1][]
        for(int i=n-1;i>0;i--){
            v[i][left]=v[i-1][left];
        }
    }

    return 0;
}
