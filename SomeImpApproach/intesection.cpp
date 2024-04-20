#include<bits/stdc++.h>
using namespace std;
int main() {
    // Define two vectors
     vector<int> vector1 = {1, 2, 3, 4, 5};
     vector<int> vector2 = {3, 4, 5, 6, 7};

    // Ensure that both vectors are sorted, as set_intersection requires sorted inputs
     sort(vector1.begin(), vector1.end());
     sort(vector2.begin(), vector2.end());

    // Create a vector to store the intersection
     vector<int> intersection;

    // Find the intersection using  set_intersection
     set_intersection(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(),  back_inserter(intersection));

    // Print the intersection
     cout << "Intersection: ";
    for (int num : intersection) {
         cout << num << " ";
    }
     cout <<  endl;

    return 0;
}