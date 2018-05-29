class Solution {
public:
    bool check(int queens[][2],int cnt,int x,int y)
    {
        int i,j;
        for(int k=0; k<cnt; k++)
        {
            i=queens[k][0];
            j=queens[k][1];
            if(i==x || j==y || abs(i-x)==abs(j-y))
                return false;
        }
        return true;
    }
    void solve(vector<vector<string>>& answer,int queens[][2],vector<string>& board,int n,int cnt)
    {
        if(cnt==n)
            answer.push_back(board);
        for(int i=0; i<n; i++)
        {
            if(!check(queens,cnt,i,cnt))
                continue;
            board[i][cnt]='Q';
            queens[cnt][0]=i;
            queens[cnt][1]=cnt;
            solve(answer,queens,board,n,cnt+1);
            board[i][cnt]='.';
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> answer;
        vector<string> board;
        int queens[n][2];
        for(int i=0; i<n; i++)
            board.push_back(string(n,'.'));
        solve(answer,queens,board,n,0);
        return answer;
    }
};
