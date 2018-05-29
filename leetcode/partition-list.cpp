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
    ListNode* partition(ListNode* head, int x) {
        if(!head || !head->next)
            return head;
        ListNode node1=ListNode(0);
        ListNode node2=ListNode(0);
        ListNode* p1 = &node1;
        ListNode* p2 = &node2;
        auto ptr1 = p1;
        auto ptr2 = p2;
        auto ptr = head;
        while(ptr)
        {
            if(ptr->val>=x)
                ptr1=ptr1->next=ptr;
            else
                ptr2=ptr2->next=ptr;
            ptr=ptr->next;
        }
        ptr1->next=nullptr;
        ptr2->next=p1->next;
        return p2->next;
    }
};
