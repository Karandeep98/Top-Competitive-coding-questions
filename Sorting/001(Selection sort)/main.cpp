#include <iostream>

using namespace std;

int main()
{
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
    cin>>arr[i];
   }
   int min;
   for(int j=0;j<n;j++){
        min=j;
       for(int i=j+1;i<n;i++){
        if(arr[i]<arr[min]){
            min=i;
        }
       }
       int temp=arr[j];
       arr[j]=arr[min];
       arr[min]=temp;
    cout<<"Pass "<<j+1<<": ";
   for(int i=0;i<n;i++){
    cout<<arr[i]<<" ";
   }
   cout<<endl;
   }
    return 0;
}
