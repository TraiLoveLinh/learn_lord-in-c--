#include <bits/stdc++.h>
#include <vector>
#include <unordered_map>

using namespace std;


class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> hashmap;
        int n = nums.size();

        for (int i = 0; i < n; i++){
            hashmap[nums[i]] = i;
        }

        for (int i = 0; i < n; i++){
            int complement = target - nums[i];
            if ((hashmap.count(nums[i])) && (hashmap[complement] != i)){
                return {i,  hashmap[complement]};
            }
        }

        return {};

    }
};

int main(){
    vector<int> nums = {3,2,4};
    Solution sol;
    vector<int> hm = sol.twoSum(nums, 6);
    for (auto i = hm.cbegin(); i != hm.cend(); ++i){
        cout<<*i<<" ";
    }
    cout<<"\n";
    return 0;
}