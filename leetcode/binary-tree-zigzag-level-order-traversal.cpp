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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> answer;
        if(root==nullptr)
            return answer;
        bool reversed=false;
        queue<TreeNode* > q;
        q.push(root);
        while(!q.empty())
        {
            vector<int> temp;
            int n=q.size();
            for(int i=0; i<n; i++)
            {
                TreeNode* f=q.front();
                q.pop();
                if(!reversed)
                    temp.push_back(f->val);
                else
                    temp.insert(temp.begin(),f->val);
                if(f->left)
                    q.push(f->left);
                if(f->right)
                    q.push(f->right);
            }
            answer.push_back(move(temp));
            reversed = !reversed;
        }
        return answer;
    }
};
