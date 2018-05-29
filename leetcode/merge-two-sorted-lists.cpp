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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        if(l1==nullptr)
            return l2;
        if(l2==nullptr)
            return l1;
        auto head=l1;
        if(l1->val<l2->val)
        {
            head=l1;
            l1=l1->next;
        }
        else
        {
            head=l2;
            l2=l2->next;
        }
        auto current=head;
        while(l1!=nullptr&&l2!=nullptr)
        {
            if(l1->val<l2->val)
            {
                current=current->next=l1;
                l1=l1->next;
            }
            else
            {
                current=current->next=l2;
                l2=l2->next;
            }
        }
        while(l1!=nullptr)
        {
            current=current->next=l1;
            l1=l1->next;
        }
        while(l2!=nullptr)
        {
            current=current->next=l2;
            l2=l2->next;
        }
        return head;
    }
};
