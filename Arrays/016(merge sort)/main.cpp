#include <iostream>

using namespace std;

 void merge(int a[],int left[],int lsize,int right[],int rsize){
    int i=0,j=0,k=0;
    while(i<lsize && j<rsize){
        if(left[i]<right[j]) a[k++]=left[i++];
        else a[k++]=right[j++];
    }
    while(i<lsize){
        a[k++]=left[i++];
    }
    while(j<rsize){
        a[k++]=right[j++];
    }
 }
void mergesort(int a[],int n){

        if(n<2) return;
        int mid=n/2;
        int left[mid],right[n-mid];
        for(int i=0;i<mid;i++){
            left[i]=a[i];
        }
        for(int i=mid;i<n;i++){
            right[i-mid]=a[i];
        }
        mergesort(left,mid);
        mergesort(right,n-mid);
        merge(a,left,mid,right,n-mid);

}
int main()
{

    int a[]={5,4,1,2,3,0,9,8,7,6,51};
    int n= sizeof(a)/sizeof(a[0]);

    mergesort(a,n);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}
