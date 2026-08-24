// LeetCode #53 - Maximum Subarray
// Approach: Kadane's Algorithm
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int c_s = 0;
        int m_s = INT_MIN;
        for(int i = 0; i < nums.size(); i++){
            c_s += nums[i];
            m_s = max(c_s,m_s);
            if(c_s < 0) c_s = 0;
        }
        return m_s;
    }
};
