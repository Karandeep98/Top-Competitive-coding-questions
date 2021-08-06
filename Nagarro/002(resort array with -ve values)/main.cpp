#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0,j=n-1;i<j;){
        if(abs(a[i])>abs(a[i+1])){
            if(abs(a[i])>=abs(a[j])){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            j--;
        }
        else{
            int temp=a[i];
            a[i]=a[i+1];
            a[i+1]=temp;
            if(abs(a[i])>=abs(a[j])){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
            j--;
        }
    }
    for(int i:a){
        cout<<i<<" ";
    }
    return 0;
}
