class Solution {
public:
    void solve(vector<vector<int>>& answer,vector<int>& candidates,int target,int start,vector<int>& sol)
    {
        if(target==0)
        {
            answer.push_back(sol);
            return;
        }

        for(int i=start; i<candidates.size(); i++)
        {
            if(target-candidates[i]>=0)
            {
                sol.push_back(candidates[i]);
                solve(answer,candidates,target-candidates[i],i,sol);
                sol.pop_back();
            }
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> answer;
        vector<int> sol;
        sort(candidates.begin(),candidates.end());
        solve(answer,candidates,target,0,sol);
        return answer;
    }
};
