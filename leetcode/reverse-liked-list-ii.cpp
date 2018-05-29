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
    ListNode* reverseBetween(ListNode* head, int m, int n) {
        m--;
        n--;
        auto ptr = head;
        int distance=n-m;
        while(m--)
            ptr=ptr->next;
        while(distance>=1)
        {
            int temp=distance;
            auto ptr2=ptr;
            while(temp--)
                ptr2=ptr2->next;
            swap(ptr->val,ptr2->val);
            ptr=ptr->next;
            distance-=2;
        }
        return head;
    }
};
