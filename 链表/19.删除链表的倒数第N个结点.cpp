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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummy = new ListNode(0, head);
        ListNode* p = head;
        ListNode* q = dummy;
        for(int i = 0; i < n; i++)
        {
            p = p->next;
        }
        while(p)
        {
            p = p->next;
            q = q->next;
        }
        q->next = q->next->next;
        // delete q->next;
        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
};
