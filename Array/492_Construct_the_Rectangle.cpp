// LeetCode #492 - Construct the Rectangle
// Approach: Start from Square Root
// Time Complexity: O(sqrt(n))
// Space Complexity: O(1)

class Solution {
public:
    vector<int> constructRectangle(int area) {
        int width = sqrt(area);
        while(width > 0){
            if(area % width == 0){
                return {area/width,width};
            }
            width --;
        }
        return {};
    }
};
