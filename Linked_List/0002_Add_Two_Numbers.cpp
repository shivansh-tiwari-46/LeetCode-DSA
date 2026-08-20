// LeetCode #2 - Add Two Numbers
// Approach: Linked List + Carry
// Time Complexity: O(max(n, m))
// Space Complexity: O(max(n, m))

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL || l2 == NULL){
            return (l1==NULL)?(l2):(l1);
        }
        ListNode* temp = NULL;
        ListNode* ans = NULL;
    
        int carry,sum=0,r;
        while(l1 != NULL && l2 != NULL){
            carry = sum/10;
            sum = l1->val + l2->val + carry;
            r = sum%10;
            ListNode* newNode = new ListNode(r);
            if(ans == NULL){
                ans = newNode;
                temp = ans;
                l1=l1->next;
                l2=l2->next;                
            }
            else{
                temp->next = newNode;
                temp = newNode;
                l1=l1->next;
                l2=l2->next;  
            }            
        }
        while(l1 != NULL){
            carry = sum/10;
            sum = l1->val + carry;
            r = sum%10;
            ListNode* newNode = new ListNode(r);
            temp->next = newNode;
            temp = newNode;
            l1 = l1->next;
        }
        while(l2 != NULL){
            carry = sum/10;
            sum = l2->val + carry;
            r = sum%10;
            ListNode* newNode = new ListNode(r);
            temp->next = newNode;
            temp = newNode;
            l2 = l2->next;
        }
        carry = sum/10;
        while(carry>0){
            r = carry%10;
            ListNode* newNode = new ListNode(r);
            temp->next = newNode;
            temp = newNode;
            carry/=10;
        }
        return ans;
        
    }
};
