* struct ListNode {
    *  *     int val;
    *   *     ListNode *next;
    *    *     ListNode(int x) : val(x), next(NULL) {}
    *     *
};
*      */
class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        auto current=head;
        while(current!=nullptr)
        {
            bool end=false;
            for(int i=1; i<k-(i-1); i++)
            {
                auto temp=current;
                auto left=current;
                auto right=current;
                for(int j=1; j<k-i+1; j++)
                {
                    if(temp->next!=nullptr)
                        temp=temp->next;
                    else
                    {
                        end=true;
                        break;
                    }
                    if(j==i-1)
                        left=temp;
                    if(j==k-i)
                        right=temp;
                }
                if(end)
                    break;
                swap(left->val,right->val);
            }
            if(end)
                break;
            for(int i=0; i<k; i++)
                current=current->next;
        }
        return head;
    }
};
