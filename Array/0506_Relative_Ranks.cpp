// LeetCode #506 - Relative Ranks
// Approach: Ordered Map
// Time Complexity: O(n log n)
// Space Complexity: O(n)

class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        map<int, int> mp;
        for (int i = 0; i < score.size(); i++) {
            mp[score[i]] = i;
        }
        vector<string> ans(score.size());
        int rank = 1;
        for(auto it = mp.rbegin(); it != mp.rend(); it++){
            if(rank == 1){
                ans[it->second] = "Gold Medal";
            }
            else if(rank == 2){
                ans[it->second] = "Silver Medal";
            }
            else if(rank == 3){
                ans[it->second] = "Bronze Medal";
            }
            else{
                ans[it->second] = to_string(rank);
            }
            rank++;
        }
        return ans;
    }
};
