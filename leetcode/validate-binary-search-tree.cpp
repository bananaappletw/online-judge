/**
 *  * Definition for a binary tree node.
 *   * struct TreeNode {
 *    *     int val;
 *     *     TreeNode *left;
 *      *     TreeNode *right;
 *       *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 *        * };
 *         */
class Solution {
public:
    bool isbst(TreeNode* root, TreeNode* & prev)
    {
        if(root==nullptr)
            return true;
        if(!isbst(root->left,prev))
            return false;
        if(prev!=nullptr&&prev->val>=root->val)
            return false;
        prev=root;
        return isbst(root->right,prev);
    }
    bool isValidBST(TreeNode* root) {
        TreeNode* prev=nullptr;
        return isbst(root,prev);
    }
};
