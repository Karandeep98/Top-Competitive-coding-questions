/*#include <iostream>

using namespace std;
void toh(int n,char a,char b,char c){
    if(n>0){
        toh(n-1,a,c,b);
        cout<<"Move a disk from "<<a<<" to "<<c<<endl;
        toh(n-1,b,a,c);
    }
}
int main()
{
    int n;
    cin>>n;
    toh(n,'A','B','C');
    return 0;
}*/
#include<iostream>
using namespace std;
int m,count;
void toh(int n,int a,int b,int c){
    if(n>0){
        toh(n-1,a,c,b);

        count++;
        if(count==m) {
            cout<<a<<" "<<c<<endl;
            //return;
        }
        toh(n-1,b,a,c);
    }
}
int main()
 {
    int t,n;
    cin>>t;
    while(t--){
        cin>>n>>m;
      count=0;
        toh(n,1,2,3);
    }
	return 0;
}
