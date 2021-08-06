#include <iostream>
using namespace std;
//Rotate the matrix by 90 degree anticlockwise
int main()
{
    int n;
    cin>>n;
    int a[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    int i=0,j=0;
    //code for transpose of matrix with O(1) space
    while(i<n){

        swap(a[i][j],a[j][i]);
        if(j==n-1) j=++i;
        else j++;
    }

    // Reversing the columns to get 90 degree anticlockwise rotated matrix as output
   for(int i=0;i<n;i++){
        for(int j=0;j<n/2;j++){
            swap(a[j][i],a[n-j-1][i]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}










