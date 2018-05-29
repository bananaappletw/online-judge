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
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> answer;
        if(!root)
            return answer;
        if(root->left)
        {
            auto temp=inorderTraversal(root->left);
            move(temp.begin(),temp.end(),back_inserter(answer));
        }
        answer.push_back(root->val);
        if(root->right)
        {
            auto temp=inorderTraversal(root->right);
            move(temp.begin(),temp.end(),back_inserter(answer));
        }
        return answer;
    }
};
