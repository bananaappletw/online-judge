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
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(!root)
            return {};
        queue<TreeNode*> q;
        vector<vector<int>> answer;
        q.push(root);
        while(!q.empty()) {
            int n=q.size();
            vector<int> row;
            for(int i=0; i<n; i++) {
                auto node=q.front();
                q.pop();
                if(node->left)
                    q.push(node->left);
                if(node->right)
                    q.push(node->right);
                row.push_back(node->val);
            }
            answer.push_back(row);
        }
        return answer;
    }
};
