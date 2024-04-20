#include<bits/stdc++.h>
using namespace std;
string longestPrefixSuffix(string &str){
    // Write your code here.
    string  ans="";
    for(int i=1;i<str.size()-1;i++){
        string pref=str.substr(0,i);
        cout<<pref<<endl;
        string suffix=str.substr(str.size()-i,i);
        if(pref==suffix && i>ans.size()){
            ans=pref;
        }
    }
    return ans;
}
int main(){
   string s="aaaaabaa";
  cout<< longestPrefixSuffix(s);
}