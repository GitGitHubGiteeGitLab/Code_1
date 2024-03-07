/**
 * struct ListNode {
 *	int val;
 *	struct ListNode *next;
 *	ListNode(int x) : val(x), next(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 
     * @param head ListNode类 
     * @param m int整型 
     * @param n int整型 
     * @return ListNode类
     */
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        // write code here
        if(m == n)
            return head;

        ListNode dummy(-1);
        dummy.next = head;
        ListNode *front = &dummy, *back = &dummy, *frontPrev = nullptr, *backNext = nullptr; 
        int gap = n - m;
        while(gap--){
            back = back->next;
        }
        while(m--){
            frontPrev = front;
            front = front->next;
            back = back->next;
        }
        backNext = back->next;
        reverse(front, backNext);
        front->next = backNext;
        frontPrev->next = back;
        return dummy.next;
    }
    //reverse是左闭右开空间
    void reverse(ListNode* front, ListNode* backNext){
        ListNode* cur = front; 
        ListNode* prev = nullptr;
        ListNode* next;
        while(cur != backNext){
            next = cur->next;
            cur->next =prev;
            prev = cur;
            cur = next;
        }
    }
};