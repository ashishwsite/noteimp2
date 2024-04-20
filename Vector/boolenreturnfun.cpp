#include<bits/stdc++.h>
using namespace std;
int main(){
    // ALL FUN RETURN VALU IS BOOLEN 
    // ALL RETURN DECIDING ON YES /TRUE COUNT 
    vector<int> v={4,68,4,48,286,456,42};
    // if all true than true ans return 
    auto at_f=all_of(v.begin(),v.end(),[](int x){return x%2==0;});// x apne app hi iterator par value ko le lega 
    // {return x%2==0;} if(x%2==0 true than return true (by deaflut return type ) else return by deafault false )
    cout<<at_f<<endl;
    auto aft_f=any_of(v.begin(),v.end(),[](int y){return y%2==0;}); // if any yes than return true 
    cout<<at_f<<endl;
    auto nft_f=none_of(v.begin(),v.end(),[](int z){return z%2==1;});// if all false than only true return 
    cout<<nft_f<<endl;
}