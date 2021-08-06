#include <iostream>
using namespace std;
bool isAnagram(string s,string t){
    if(s.length()!=t.length()) return false;
        int arr[26]={};
        for(char c: s){
            arr[c-'a']++;
        }
        for(char c: t){
            arr[c-'a']--;
        }
        for(int a: arr){
            if(a!=0) return false;
        }
        return true;
}
int main()
{
    string s,t;
    cin>>s>>t;
    if(isAnagram(s,t)) cout<<"Anagram";
    else cout<<"Not Anagram";
    return 0;
}
