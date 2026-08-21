// LeetCode #219 - Contains Duplicate II
// Approach: Hash Map storing latest index
// Average Time: O(n)
// Space: O(n)

class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i = 0; i < nums.size(); i++){
            if(mp.count(nums[i])){
                if(i-mp[nums[i]]<=k){
                    return true;
                }
            }
            mp[nums[i]]= i;
        }
        return false;
    }
};
