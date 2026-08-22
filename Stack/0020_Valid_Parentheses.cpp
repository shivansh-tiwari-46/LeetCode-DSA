// LeetCode #20 - Valid Parentheses
// Approach: Stack
// Time Complexity: O(n)
// Space Complexity: O(n)

class Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> a;
        for (int i = 0; i < n; i++) {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') {
                a.push(s[i]);
            } else {
                if (a.empty()) {
                    return false;
                }
                char t = a.top();
                a.pop();
                if ((s[i] == ')' && t != '(') || (s[i] == '}' && t != '{') ||
                    (s[i] == ']' && t != '[')) {
                    return false;
                }
            }
        }
        return a.empty();
    }
};
