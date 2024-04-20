#include<bits/stdc++.h>
using namespace std;
int main(){
// deaclearation of multimap
// mutlimap help to create duplicate key also
multimap<int,int> mt;
map<int,int> m;
int key,value;
// insertion in multimap by using pair wise 
mt.insert({key,value});
// checking absence of given key pair in map
bool ans=-1;
if(m.find(1)==m.end()){
    cout<<"absence ";
    ans=1;
}
else 
cout<<"present";
ans=0; 
}
