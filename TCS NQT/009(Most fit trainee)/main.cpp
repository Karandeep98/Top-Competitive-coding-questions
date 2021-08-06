#include <iostream>

using namespace std;

int main()
{
    int a[3],b[3],c[3];
    cin>>a[0]>>b[0]>>c[0];
    cin>>a[1]>>b[1]>>c[1];
    cin>>a[2]>>b[2]>>c[2];
    int a1=(a[0]+a[1]+a[2])/3;
    int b1=(b[0]+b[1]+b[2])/3;
    int c1=(c[0]+c[1]+c[2])/3;
    cout<<a1<<b1<<c1;
    if(a1>b1 && a1>c1){
        cout<<"Trainee number: 1\nOxyzen level:"<<a1;
    }
    else if(a1<b1 && b1>c1){
        cout<<"Trainee number: 2\nOxyzen level:"<<b1;
    }
    else if(a1<c1 && b1<c1){
        cout<<"Trainee number: 3\nOxyzen level:"<<c1;
    }
    else if(a1==b1 && a1==c1){
        cout<<"Trainee number: 1\n";
         cout<<"Trainee number: 2\n";
        cout<<"Trainee number: 3\nOxyzen level:"<<b1;
    }
    else if(a1==b1){
        cout<<"Trainee number: 1\n";
        cout<<"Trainee number: 2\nOxyzen level:"<<b1;
    }
     else if(a1==c1){
        cout<<"Trainee number: 1\n";
        cout<<"Trainee number: 3\nOxyzen level:"<<a1;
    }
     else if(b1==c1){
        cout<<"Trainee number: 2\n";
        cout<<"Trainee number: 3\nOxyzen level:"<<c1;
    }
    return 0;
}
