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

        while(head->next && head->val == head->next->val)
            head=head->next;

        if(head->next)
            head->next=deleteDuplicates(head->next);
        return head;
    }
};
