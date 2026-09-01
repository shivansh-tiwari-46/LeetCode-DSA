// LeetCode #1491 - Average Salary Excluding Minimum and Maximum Salary
// Approach: Sorting
// Time Complexity: O(n log n)
// Space Complexity: O(1)

class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin(),salary.end());
        double sum = 0;
        for(int i = 1; i < salary.size()-1; i++){
            sum += salary[i];
        }
        return sum/(salary.size()-2);
    }
};
