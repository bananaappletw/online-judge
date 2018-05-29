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
    vector<TreeNode*> generateSubTrees(int start,int end)
    {
        if(start>end)
            return {nullptr};
        if(start==end)
            return {new TreeNode(start)};

        vector<TreeNode*> answer;
        for(int i=start; i<=end; i++)
        {
            for(auto& left:generateSubTrees(start,i-1))
                for(auto& right:generateSubTrees(i+1,end))
                {
                    TreeNode* root= new TreeNode(i);
                    root->left=left;
                    root->right=right;
                    answer.push_back(root);
                }
        }
        return answer;
    }
    vector<TreeNode*> generateTrees(int n) {
        if(!n)
            return vector<TreeNode*>();
        return generateSubTrees(1,n);
    }
};
