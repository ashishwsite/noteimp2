// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    long long totalCost(vector<int>& costs, int k, int candidates) {
        long long  ans=0;
        for(int i=1;i<=k;i++){
            int n=costs.size();
            cout<<i<<" ";
            // cout<<n<<" //";
            // cout<<ans<<" ";
            if(n<=candidates || n<=k){
             ans=ans+*(min_element(costs.begin(),costs.end()));
             costs.erase(min_element(costs.begin(),costs.end()));
             cout<<*(min_element(costs.begin(),costs.end()))<<" ";
            }
         else  if(costs[candidates-1]>=costs[n-candidates]){
            ans=ans+costs[n-candidates];
            cout<<costs[n-candidates]<<" ";
             costs.erase(costs.begin()+n-candidates);
            }
          else{
         ans=ans+costs[candidates-1];
         cout<<costs[candidates-1]<<" ";
         costs.erase(costs.begin()+candidates-1);
        }
      cout<<ans<<endl;
        }
        return ans;
        
    }
};

int main() {
    Solution ob;
    vector<int> costs={31,25,72,79,74,65,84,91,18,59,27,9,81,33,17,58};
    long long ans=ob.totalCost(costs,11,2);
    cout<<"res"<<ans;

    return 0;
}