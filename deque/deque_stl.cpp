#include<bits/stdc++.h>
using namespace std;
// DEQUE :double end array help in making calculation similar to array but more function than vector
int main(){
     deque<int> q={1,2,3,6,9,45,4}; 
     // adding element at index 4 
     cout<<"elemet before adding at id =4 =>"<<q[4]<<endl;
     auto it=q.begin()+4;
     q.insert(it,1000);
     cout<<"elemet after adding at id =4 =>"<<q[4]<<endl;// id 4 par add hua aur 4th val elemnt 5th par chala gaya 
    return 0;

}