#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int a[n],b[n],c[n];
    cout<<"Enter elements of A:\n";
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<"Enter elements of B:\n";
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"Enter elements of C:\n";
    for(int i=0;i<n;i++){
        cin>>c[i];
    }
    int i=0,j=0,k=0;
    for(;i<n && j<n && k<n;){
        if(a[i]==b[j]&&a[i]==c[k]){
            cout<<a[i]<<" ";
            i++;j++;k++;
        }
        else{
            if(a[i]==b[j] && c[k]<a[i]) k++;
            else if(a[i]==c[k] && b[j]<a[i])j++;
            else if(b[j]==c[k] && a[i]<b[j])i++;
            else if(a[i]>b[j] && a[i]>c[k]){j++;k++;}
            else if(b[j]>a[i] && b[j]>c[k]){i++;k++;}
            else if(c[k]>a[i] && c[k]> b[j]){i++;j++;}
        }
    }
    return 0;
}
