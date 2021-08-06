#include<bits/stdc++.h>
using namespace std;
int main()
 {
	int n;
	cin>>n;
	while(n--){
	    string s;
	    bool balanced=true;
	    stack<char> st;
	    cin>>s;
	    for(int i=0;i<s.size();i++){
	        if(s[i]=='[') st.push(']');
	        else if(s[i]=='(') st.push(')');
	        else if(s[i]=='{') st.push('}');
	        else if(!st.empty() && s[i]==st.top()) st.pop();
	        else {
	            balanced=false;
	           break;
	        }
	    }
	    if(st.empty()&&balanced) cout<<"balanced\n";
	    else  cout<<"not balanced\n";
	}
	return 0;
}
