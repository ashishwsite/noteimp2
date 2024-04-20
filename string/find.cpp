#include<bits/stdc++.h>
using namespace std;
// find  char/sub string in given string 
bool isvowel(char &c){
    string vow="aeiouAEIOU";
    int  it =vow.find(c); // find function accept char /string 
    // size_t  it =vow.find(c); // size_t is intdata type having maximum range of index if not found thaen it return max int 
    if(it<vow.length()) return true;
    //convert size_t variable into interger 
    int inval=static_cast<int>(it);
    return false;
}
int main(){
    char c='a';
    cout<<isvowel(c);

}