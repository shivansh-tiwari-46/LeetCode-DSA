// LeetCode #3 - Longest Substring Without Repeating Characters
// Approach: Sliding Window + Hash Set
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        unordered_set<char> ss;

        int left = 0;
        int maxi = 0;

        for (int right = 0; right < s.size(); right++) {

            while (ss.find(s[right]) != ss.end()) {

                ss.erase(s[left]);
                left++;
            }

            ss.insert(s[right]);

            maxi = max(maxi, right - left + 1);
        }

        return maxi;
    }
};
