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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        if(lists.empty())
            return nullptr;
        ListNode* head=nullptr;
        ListNode* current=nullptr;
        while(true)
        {
            bool allempty=true;
            bool first=false;
            int selected;
            int i;
            for(i=0; i<lists.size(); i++)
            {
                if(lists[i]!=nullptr)
                {
                    allempty=false;
                    if(!first)
                    {
                        selected=i;
                        first=true;
                    }
                    else if(lists[i]->val<lists[selected]->val)
                        selected=i;
                }
            }
            if(allempty)
                break;
            if(current==nullptr)
                head=current=lists[selected];
            else
                current=current->next=lists[selected];
            lists[selected]=lists[selected]->next;
        }
        return head;
    }
};
