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
    ListNode* rotateRight(ListNode* head, int k) {
        if(!head)
            return head;
        auto temp=head;
        int lens=0;
        while(temp)
        {
            temp=temp->next;
            lens++;
        }
        k%=lens;
        if(!k)
            return head;
        auto newhead=head;
        for(int i=0; i<lens-k; i++)
            newhead=newhead->next;
        auto end=newhead;
        for(int i=0; i<k-1; i++)
            end=end->next;
        end->next=head;
        for(int i=0; i<lens-k-1; i++)
            head=head->next;
        head->next=nullptr;
        return newhead;
    }
};
