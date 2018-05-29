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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int size=0;
        auto temp=head;
        while(temp!=nullptr)
        {
            temp=temp->next;
            size++;
        }
        int nth=size-n;
        if(nth==0)
            return head->next;
        auto previous=head;
        auto current=head;
        while(nth--)
        {
            previous=current;
            current=current->next;
        }
        previous->next=current->next;
        return head;
    }
};
