#include <bits/stdc++.h>
using namespace std;
int partition(int a[],int l,int h){
    int pivot=a[h];
    int pindex=l;
    for(int i=l;i<h;i++){
        if(a[i]<=pivot){
            swap(a[i],a[pindex]);
            pindex++;
        }
    }
    swap(a[pindex],a[h]);
    return pindex;
}

void quicksort(int a[],int start,int end){
if(start<end){
        int pindex=partition(a,start,end);
        quicksort(a,start,pindex-1);
        quicksort(a,pindex+1,end);
}
}
int main()
{
   int a[]={5,4,3,8,9,17,11,2,4,1};
   int n=sizeof(a)/sizeof(a[0]);
   quicksort(a,0,n-1);
   for(int i:a)cout<<i<<" ";
    return 0;
}
