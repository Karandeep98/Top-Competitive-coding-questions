#include <iostream>

using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    int dir=0,col=0;
    while(col<m){
        if(dir==0){
            for(int i=0;i<n;i++){
                cout<<arr[i][col]<<" ";
            }
            dir=1;col++;
        }
        else if(dir==1){
            for(int i=n-1;i>=0;i--){
                cout<<arr[i][col]<<" ";
            }
            dir=0;col++;
        }
    }
    return 0;
}
