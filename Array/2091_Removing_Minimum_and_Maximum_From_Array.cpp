// LeetCode #2091 - Removing Minimum and Maximum From Array
// Approach: Index Tracking + Greedy
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minidx = 0;
        int maxidx = 0;
        for(int i = 0; i < nums.size(); i ++){
            if(nums[minidx] > nums[i]){
                minidx = i;
            }
            if(nums[maxidx] < nums[i]){
                maxidx = i;
            }
        }
        int n = nums.size()-1;
        int ans = max(minidx,maxidx)+1;
        ans = min(ans,n - min(minidx,maxidx) + 1);
        ans = min(ans,minidx + 1 + (n-maxidx) + 1);
        ans = min(ans,maxidx + 1 + (n-minidx) + 1);
        return ans;
    }
};
