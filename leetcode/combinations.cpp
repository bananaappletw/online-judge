class Solution {
public:
    void solve(vector<vector<int>>& answer,vector<int>& sol,int cur,int start,int n,int k)
    {
        if(cur==k)
            answer.push_back(sol);
        for(int i=start; i<n; i++)
        {
            sol.push_back(i+1);
            solve(answer,sol,cur+1,i+1,n,k);
            sol.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> answer;
        vector<int> sol;
        solve(answer,sol,0,0,n,k);
        return answer;
    }
};
