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
    int csum=a[0],osum=a[0];
    for(int i=1;i<n;i++){
        if((csum +a[i])<a[i]) csum=a[i];
        else{
            csum+=a[i];
        }
        if(csum>osum) osum=csum;
    }
    cout<<osum;
    return 0;
}
