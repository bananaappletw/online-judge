/**
 *  * Definition for binary tree with next pointer.
 *   * struct TreeLinkNode {
 *    *  int val;
 *     *  TreeLinkNode *left, *right, *next;
 *      *  TreeLinkNode(int x) : val(x), left(NULL), right(NULL), next(NULL) {}
 *       * };
 *        */
class Solution {
public:
    void connect(TreeLinkNode *root) {
        queue<TreeLinkNode*> q;
        TreeLinkNode* temp;
        if(root!=nullptr)
            q.push(root);
        while(!q.empty()) {
            int n=q.size();
            for(int i=0; i<n; i++) {
                temp=q.front();
                if(temp->left!=nullptr)
                    q.push(temp->left);
                if(temp->right!=nullptr)
                    q.push(temp->right);
                q.pop();
                temp->next=q.front();
            }
            temp->next=nullptr;
        }
    }
};
