// LeetCode #9 - Palindrome Number
// Approach: Reverse the number
// Time Complexity: O(log10(n))
// Space Complexity: O(1)

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0) return false;

        long rev = 0, n = x;

        while (n > 0) {
            rev = rev * 10 + (n % 10);
            n /= 10;
        }

        return rev == x;
    }
};
