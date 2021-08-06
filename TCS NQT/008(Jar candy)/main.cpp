#include <iostream>

using namespace std;

int main()
{
   int n=10,k=5;
   int c;
   cin>>c;
   if(c>0&&c<6){
    cout<<"NUMBER OF CANDIES SOLD :"<<c<<endl;
    cout<<"NUMBER OF CANDIES AVAILABLE :"<<n-c<<endl;
   }
   else{
    cout<<"INVALID INPUT"<<endl;
     cout<<"NUMBER OF CANDIES AVAILABLE :"<<n<<endl;
   }
    return 0;
}
