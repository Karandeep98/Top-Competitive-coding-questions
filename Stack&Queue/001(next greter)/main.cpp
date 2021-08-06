#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int t,n;
	cin>>t;
	while(t--){
	    cin>>n;
	    vector<int> v(n);
	    for(int i=0;i<n;i++){
	        cin>>v[i];
	    }

	    vector<int> result;
	    result.push_back(-1);

	    int max=v[n-1];
	    for(int i=n-2;i>=0;i--){
	        if(v[i]<max){
	            result.push_back(max);
	        }
	        else {
	            max=v[i];
	            result.push_back(-1);
	        }
	    }

	    reverse(result.begin(),result.end());
	    for(int i: result){
	        cout<<i<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
