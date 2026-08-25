// LeetCode #78 - Subsets
// Approach: Backtracking
// Time Complexity: O(n * 2^n)
// Space Complexity: O(n) - auxiliary space

class Solution {
public:
    void solve(vector<int>& nums, int idx, vector<int>& current,
               vector<vector<int>>& ans) {

        ans.push_back(current);

        for (int i = idx; i < nums.size(); i++) {

            current.push_back(nums[i]);

            solve(nums, i + 1, current, ans);

            current.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {

        vector<vector<int>> ans;

        vector<int> current;

        solve(nums, 0, current, ans);

        return ans;
    }
};
