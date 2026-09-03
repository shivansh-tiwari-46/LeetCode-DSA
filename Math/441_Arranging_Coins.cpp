// LeetCode #441 - Arranging Coins
// Approach: Iterative Subtraction
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)

class Solution {
public:
    int arrangeCoins(int n) {
        int row = 0;
        for(int i = 0; n > i; i++){
            row++;
            n -= row;
        }
        return row;
    }
};
