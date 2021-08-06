#include <bits/stdc++.h>
using namespace std;

int wordBreak(string A, vector<string> &B);


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> dict;
        for(int i=0;i<n;i++){
            string S;
            cin>>S;
            dict.push_back(S);
        }
        string line;
        cin>>line;
        cout<<wordBreak(line, dict)<<"\n";
    }
}
// } Driver Code Ends


//User function template for C++

// A : given string to search
// B : vector of available strings
 unordered_map<string,bool> mp;
bool calculate(string s){
    if(s.size()==0) return true;
    for(int i=1;i<=s.size();i++){
     if(mp[s.substr(0,i)] && calculate(s.substr(i,s.size()-i))) return true;
    }


}
int wordBreak(string A, vector<string> &B) {
    //code here
    for(string i :B){
        mp[i]=true;
    }
    if(calculate(A)) return 1;
    else return 0;
}
