ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* cur = dummy;
        while (l1 != nullptr && l2 != nullptr) {
            ListNode** pp = (l1->val < l2->val) ? &l1 : &l2;
            cur->next = *pp;
            cur = cur->next;
            *pp = (*pp)->next;
        }
        cur->next = (l1 == nullptr) ? l2 : l1;

        ListNode* ans = dummy->next;
        delete dummy;
        return ans;
    }
