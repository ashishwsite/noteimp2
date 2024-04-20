#include<bits/stdc++.h>
using namespace std;
int main(){
     vector<int> myVector = {1, 2, 3, 4, 5};
    std::srand(std::time(0)); // Seed the random number generator
// first generatr random index
    int randomIndex = rand() % myVector.size();
    int randomElement = myVector[randomIndex];
    cout << randomElement << std::endl;
}