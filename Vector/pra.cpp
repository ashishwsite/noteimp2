#include <bits/stdc++.h>
using namespace std;
int solve(vector<int> &nums, int id)
{
    if (id = nums.size() - 1)
    {
        return nums[id];
    }
    if (id > nums.size() - 1)
    {
        return 0;
    }

    // if take ans
    int anst = nums[id] + solve(nums, id + 2);
    // if not teke
    int ansn = solve(nums, id + 1);
    //   cout<<max(anst,ansn)<<endl;
    int ans = max(anst, ansn);
    cout << ans << endl;
    return ans;
}
// int maximumNonAdjacentSum(vector<int> &nums)
// {
//     // Write your code here.

//     return solve(nums, 0);
// }
int main()
{
    //practice 1:
     vector<vector<int>> v1={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int>> v2={{1,2,3},{4,5,6},{7,8,9}};
    for(int i=0;i<v1.size();i++){
        if(v1[i]==v2[i]){
            cout<<"yes"<<endl;
        }
    }
    //
    vector<int> nums = {1, 2, 4};
    int ans = solve(nums,0);
    cout<<"dskldfnas";
}