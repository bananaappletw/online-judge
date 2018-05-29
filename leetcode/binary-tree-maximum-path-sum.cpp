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
    int maxpathsum(TreeNode* root,int& ret) {
        int cur=root->val;
        int l=0;
        int r=0;
        if(root->left)
            l=max(0, maxpathsum(root->left,ret));
        if(root->right)
            r=max(0, maxpathsum(root->right,ret));

        ret=max(ret,l+r+cur);
        return cur+max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        int ret=root->val;
        maxpathsum(root,ret);
        return ret;
    }
};
