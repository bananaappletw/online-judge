class Solution {
public:
    bool check(vector<pair<int,int>>& queens,int x,int y)
    {
        for(auto queen: queens)
        {
            int i =queen.first;
            int j =queen.second;
            if(i==x | j ==y | abs(i-x) == abs(j-y))
                return false;
        }
        return true;
    }
    void solve(int& answer,vector<pair<int,int>>& queens,int cnt,int n)
    {
        if(cnt==n)
            answer++;
        for(int i=0; i<n; i++)
        {
            if(!check(queens,i,cnt))
                continue;
            queens.push_back(make_pair(i,cnt));
            solve(answer,queens,cnt+1,n);
            queens.pop_back();
        }
    }
    int totalNQueens(int n) {
        vector<pair<int,int>> queens;
        int answer=0;
        solve(answer,queens,0,n);
        return answer;
    }
};
