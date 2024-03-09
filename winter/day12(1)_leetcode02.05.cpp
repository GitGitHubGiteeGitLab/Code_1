/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int sum = 0, carry = 0;
        ListNode dummy(-1);
        ListNode* tail = &dummy;
        while(l1 || l2 || carry){
            int n1 = 0, n2 = 0;
            if(l1){
                n1 = l1->val;
                l1 = l1->next;
            }
            if(l2){
                n2 = l2->val;
                l2 = l2->next;
            }
            int val = n1 + n2 + carry; 
            sum = val % 10;
            carry = val / 10;
            ListNode *tmp = new ListNode(sum);
            tail->next = tmp;
            tail =tmp;
        }
        return dummy.next;
    }
};