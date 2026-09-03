// LeetCode #3876 - Construct Uniform Parity Array II
// Approach: Find Smallest Odd Element
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int smallOdd = INT_MAX;
        for(int i = 0; i < nums1.size(); i++){
            if(nums1[i] % 2 != 0){
                smallOdd = min(smallOdd,nums1[i]);
            }
        }
        if(smallOdd == INT_MAX) return true;
        for(int i = 0; i < nums1.size(); i ++){
            if(nums1[i] % 2 == 0 && nums1[i] <= smallOdd){
                return false;
            }
        }
        return true;
    }
};
