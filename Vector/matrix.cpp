#include <bits/stdc++.h>
using namespace std;
int main()
{
    // matrix means 2 D vector
    vector<vector<int>> v; // EMPTY VECTOR IS CREATEAD
    // row=0
    // colimns=0
    // EMPTY vector ME HAM PUSH KAR SAKTE HAI LIKIN ACESS NHIA  KAR SAKTE HAI
    // ##################
    vector<vector<int>> v(500, vector<int>(10000));
    //  ROW SIZE =500
    //  CLOUMN=10000
    // WITH INTIAL ELEMENT =0
    // #############
    vector<vector<int>> v(15);
    //  ROW =15 ; COLUM IS =0(ITS MEANS NULL)
    //  WITH INTIAL ELEMENT =0
    // #############
    vector<int> v(5, -1); // SIZE=5 AND INTILIAL ELEMENT =-1
    // ###########
    // ADDING VECTOR CALLED CONCATINATION OF VECTOR
    // Concatenate vector2 to vector1
    vector<int> vector1;
    vector<int> vector2;
    // vector1 me vector2 k kuch elment ko add kar raha hu
    vector1.insert(vector1.end(), vector2.begin(), vector2.end());
    cout << "hey";
}
