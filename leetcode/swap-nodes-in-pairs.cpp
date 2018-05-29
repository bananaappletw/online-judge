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
    ListNode* swapPairs(ListNode* head) {
        auto answer=head;
        while(head!=nullptr)
        {
            if(head->next!=nullptr)
                swap(head->val,head->next->val);
            if(head->next!=nullptr)
                head=head->next->next;
            else
                head=head->next;
        }
        return answer;
    }
};
