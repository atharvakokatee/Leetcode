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
// Faster than 67.85%
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* A, ListNode* B) {
        ListNode* head = NULL;
        ListNode* current = head;
        int carry = 0;
        while(A || B){
            int sum = ((A)?A->val:0) + ((B)?B->val:0) + carry;
            carry = (sum >= 10)?1:0;
            sum = sum % 10;
            ListNode* newNode = new ListNode(sum);
            if(!head){
                head = newNode;
                current = head;
            } else {
                current->next = newNode;
                current = newNode;
            }
            if(A) A = A->next;
            if(B) B = B->next;
        }
        if(carry > 0){
            ListNode* newNode = new ListNode(carry);
            current->next = newNode;
        }
        return head;       
    }
};
