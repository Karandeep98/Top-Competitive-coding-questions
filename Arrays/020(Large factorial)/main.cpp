#include<iostream>
using namespace std;
int multiply(int x,int res[],int size){
    int carry=0;
    for(int i=0;i<size;i++){
        int prod = res[i]*x + carry;
        res[i]=prod%10;
        carry=prod/10;
    }
        while(carry>0){
            res[size]=carry%10;
            carry/=10;
        size++;
        }
        return size;
}
int factorial(int n){
    int res[500];
    res[0]=1;
    int size=1;
    for(int x=2;x<=n;x++){
        size=multiply(x,res,size);
    }
    for(int i=size-1;i>=0;i--){
        cout<<res[i];
    }
}

int main(){
factorial(50);
return 0;
}
