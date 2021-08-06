/*#include <bits/stdc++.h>

using namespace std;

int main()
{
   priority_queue<int> pq;
   pq.push(10); pq.push(5); pq.push(-5); pq.push(23); pq.push(17); pq.push(3);
   while(!pq.empty()){
    cout<<pq.top()<<" ";
    pq.pop();
   }

    return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
int main()
 {

       int a[]={-12, 11, -13, -5, 6, -7, 5, -3, -6};
       int n=sizeof(a)/sizeof(a[0]);
       int i=0,j=n-1;
       while(i<j){
        if(a[i]<0 && a[j]>=0){
            i++;
            j--;
        }
        else if(a[i]>=0 && a[j]<0){
            swap(a[i],a[j]);
            i++;j--;
        }
        else if(a[i]>=0 && a[j]>=0){
            j--;
        }
        else{
            i++;
        }
    }
    for(int i:a)cout<<i<<" ";
	return 0;
}
