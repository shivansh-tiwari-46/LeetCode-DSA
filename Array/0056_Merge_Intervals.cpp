// LeetCode #56 - Merge Intervals
// Approach: Sorting + Greedy Merging
// Time Complexity: O(n log n)
// Space Complexity: O(n)

class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {

        sort(intervals.begin(), intervals.end());

        vector<vector<int>> ans;

        ans.push_back(intervals[0]);

        for(int i = 1; i < intervals.size(); i++) {

            
            if(ans.back()[1] >= intervals[i][0]) {

                ans.back()[1] = max(ans.back()[1], intervals[i][1]);
            }
            else {
                ans.push_back(intervals[i]);
            }
        }

        return ans;
    }
};
