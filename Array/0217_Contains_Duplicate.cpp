// LeetCode #217 - Contains Duplicate

// ==================================================
// Approach 1: Sorting
// Time: O(n log n)
// Space: O(log n)
// ==================================================

/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for(int i = 1; i < nums.size(); i++){
            if(nums[i] == nums[i - 1]){
                return true;
            }
        }

        return false;
    }
};
*/


// ==================================================
// Approach 2: Hash Set
// Average Time: O(n)
// Space: O(n)
// ==================================================

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> s;

        for(int x : nums){
            if(s.find(x) != s.end()){
                return true;
            }

            s.insert(x);
        }

        return false;
    }
};


// ==================================================
// Approach 3: Hash Table / Frequency Map
// Average Time: O(n)
// Space: O(n)
// ==================================================

/*
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(int x : nums){
            mp[x]++;

            if(mp[x] > 1){
                return true;
            }
        }

        return false;
    }
};
*/
