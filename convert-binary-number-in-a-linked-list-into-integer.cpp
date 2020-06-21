// Faster than 100%
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
    int getDecimalValue(ListNode* head) {
        vector<int> arr{};
        while(head){
            arr.push_back(head->val);
            head = head->next;
        }
        int num = 0;
        for(int i=arr.size()-1;i>=0;i--){
            num+=arr[arr.size()-i-1]*pow(2,i);
        }
        return num;
    }
};
