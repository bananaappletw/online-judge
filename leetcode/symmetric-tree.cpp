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
    bool isSymmetric(TreeNode* root) {
        return root==nullptr || recursive(root->left,root->right);
    }
    bool recursive(TreeNode* left,TreeNode* right) {
        if(!left&&!right)
            return true;
        if(!left^!right)
            return false;
        if(left->val!=right->val)
            return false;
        if(!recursive(left->right,right->left) || !recursive(left->left,right->right))
            return false;
        return true;
    }
};
