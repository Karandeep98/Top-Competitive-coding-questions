#include <iostream>

using namespace std;

int main()
{
   int internal,external;
   float cost=0,a;
   cin>>internal>>external;
   for(int i=0;i<internal;i++){
        cin>>a;
    cost+=(a*18);
   }
    for(int i=0;i<external;i++){
        cin>>a;
    cost+=(a*12);
   }
   cout<<"Total estimated Cost: "<<cost<<" INR";
    return 0;
}
