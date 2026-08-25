// LeetCode #61 - Rotate List
// Approach: Linked List Manipulation
// Time Complexity: O(n)
// Space Complexity: O(1)

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || k==0){
            return head;
        }
        
        ListNode* temp = head;
        ListNode* prev = NULL;
        int count = 0;
        while(temp!=NULL){
            count++;
            temp = temp->next;
        }
        temp = head;
        k = k%count;
        count = count - k;
        if(count==0){
            return head;
        }
        while(count>0){
            prev = temp;
            temp = temp->next;
            count--;
        }
        prev->next = NULL;
        prev = temp;
        if(temp!=NULL){
            while(temp->next!=NULL){
                temp=temp->next;
            }
        }
        else{
            return head;
        }
        temp->next=head;
        head = prev;
        return head;

    }
};
