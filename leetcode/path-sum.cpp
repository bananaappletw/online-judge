/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root)
            return false;
        pair<TreeNode*,int> temp= make_pair(root,sum);
        queue<pair<TreeNode*,int>> q;
        q.push(temp);
        while(!q.empty()) {
            temp=q.front();
            q.pop();
            if(!temp.first->left&&!temp.first->right&&temp.first->val==temp.second)
                return true;
            if(temp.first->left)
                q.push(make_pair(temp.first->left,temp.second-temp.first->val));
            if(temp.first->right)
                q.push(make_pair(temp.first->right,temp.second-temp.first->val));
        }
        return false;
    }
};
