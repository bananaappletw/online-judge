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
    bool isBalanced(TreeNode* root) {
        return recursive(root,0).second;
    }
    pair<int,bool> recursive(TreeNode* root, int depth) {
        if(!root)
            return make_pair(0,true);
        auto left= recursive(root->left,depth);
        auto right= recursive(root->right,depth);
        depth=max(left.first,right.first)+1;
        if(!left.second || !right.second || abs(left.first-right.first)>1)
            return make_pair(depth,false);
        return make_pair(depth,true);
    }
};
