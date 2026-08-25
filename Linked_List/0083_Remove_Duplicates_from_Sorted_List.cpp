// LeetCode #83 - Remove Duplicates from Sorted List
// Approach: Two Pointers
// Time Complexity: O(n)
// Space Complexity: O(1)

class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return head;
        }
        ListNode* numb = head;
        ListNode* check = numb->next;
        while(check!=NULL){
            if(check->val == numb->val){
               
                check = check->next;
                
            }
            else{
                numb->next = check;
                numb = check;
                check = numb->next;
            }
        }
        numb->next = NULL;
        return head;
    }
};
