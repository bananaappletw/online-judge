/**
 *  * Definition for singly-linked list.
 *   * struct ListNode {
 *    *     int val;
 *     *     ListNode *next;
 *      *     ListNode(int x) : val(x), next(NULL) {}
 *       * };
 *        */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head || !head->next)
            return head;
        ListNode* pre=nullptr;
        while(head != nullptr && ((pre && head->val == pre->val) || (head->next && head->val==head->next->val)))
        {
            pre=head;
            head=head->next;
        }
        if(head && head->next)
            head->next=deleteDuplicates(head->next);
        return head;
    }
};
