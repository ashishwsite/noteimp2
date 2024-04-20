#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int > v={4,6,9,6,73,6};
    sort(v.begin(),v.end());
    // #lower_bound(it take vector iterator from strating to end postion in sorted array) it give value equal to or just grather than a target value 
    auto it =lower_bound(v.begin(),v.end(),4);
    cout<<it-v.begin()<<endl;
    // #upper_bound(take starting and end iterator ) it give just greather value than the target 
    // if vector is finsed it give address greatehr than size it means last iterator 
    auto up=upper_bound(v.begin(),v.end(),4);
    cout<<up-v.begin()<<endl;
  // auto me=*min_element(v.begin(),v.end());
  // int me=*max_element(v.begin(),v.end());
//   #ACCUMULATOR its give sum of array 
  int sum=accumulate(v.begin(),v.end(),0);
  int ct=count(v.begin(),v.end(),6);
  auto fi=find(v.begin(),v.end(),8);
//   #REVERSE FUNCTION FOR REVERSING THE array ELEMEMT 
//   reverse(strating postion(it),ending postion(it));
reverse(v.begin()+2,v.end()-1);
vector<int> Vector = {67, 45, 745};
    auto first_iterator = Vector.begin();
    auto second_iterator = Vector.end();
    int target_valu = 45;
    //TO REMOVE FIRST ELEMENT
    // Vector.pop_front()  ; error because not avialable at this version // for this used deque
    // to this we can take dquea data structure

    // size of vector
    int vsize = Vector.size(); 
    // TO CHECk empty vector
    bool t_f = Vector.empty();
    // TO COPY ELEMENT OF ONE VECTOR TO ANOTHER VECTOR
     vector<int> copied(v.begin(), v.end());
    // TO ERASE ELEMENT
    Vector.erase(first_iterator,second_iterator);
    Vector.erase(first_iterator);// delting single element only at that position 
    // TO FIND MAXIMUN /MINUMUM ELEMENT IN Vector
    int maxelemnt=*max_element(first_iterator, second_iterator);
    // to find element in vector 
    auto it = find(first_iterator, second_iterator, target_valu);
    //TO GET LAST ELMENT IN VECTOTR 
    int lastEle=v.back();
    // cout<<lastEle;
    // it = iiterator of vector if not find then it = v.end();
    // which means index is not existin the vector
    

}