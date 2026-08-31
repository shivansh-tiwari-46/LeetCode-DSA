// LeetCode #2058 - Find the Minimum and Maximum Number of Nodes Between Critical Points
// Approach: Three Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(head == NULL || head->next == NULL || head->next->next == NULL){
            return {-1,-1};
        }
        ListNode* prev = head;
        ListNode* curr = prev -> next;
        ListNode* next = curr -> next;

        int minDistance = INT_MAX;
        int count = 2;
        int first = -1;
        int prevcount = -1;
        while(next != NULL){
            if((curr->val > next->val && curr->val > prev->val) || (curr->val < next->val && curr->val < prev->val)){
                if(first == -1){
                    first = count;
                }
                if(prevcount != -1 && count - prevcount < minDistance){
                    minDistance = count - prevcount;
                }
                prevcount = count;
            }
            count ++;
            prev = curr;
            curr = next;
            next = next->next;               
        }
        if(first == -1 || first == prevcount){
            return {-1,-1};
        }
        
        int maxDistance = prevcount - first;
        
        return {minDistance,maxDistance};
    }
};
