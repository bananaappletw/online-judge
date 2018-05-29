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
    int maxDepth(TreeNode* root) {
        return recursive(root,0);
    }
    int recursive(TreeNode* root,int num) {
        if(!root)
            return num;
        return max(recursive(root->left,num+1),recursive(root->right,num+1));
    }
};
