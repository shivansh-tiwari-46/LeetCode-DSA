// Approach 1: Merge + Sort
// Time: O((m+n) log(m+n))
// Space: O(m+n)

class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int> merge;
        for(int x : nums1){
            merge.push_back(x);
        }
        for(int x : nums2){
            merge.push_back(x);
        }
        sort(merge.begin(),merge.end());
        int n = merge.size();
        if(n % 2 == 0){
            return (merge[n/2] + merge[n/2 - 1]) / 2.0;
        }
        else{
            return merge[n/2];
        }
    }
};
