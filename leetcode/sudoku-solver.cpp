class Solution {
public:
    bool check(vector<vector<char>>& board,int i,int j,char value) {
        for(int k=0; k<9; k++)
        {
            if(board[i][k]==value)
                return false;
            if(board[k][j]==value)
                return false;
            if(board[i-i%3+k/3][j-j%3+k%3]==value)
                return false;
        }
        return true;
    }
    bool solve(vector<vector<char>>& board,int i,int j) {
        if(i==9)
            return true;
        int nexti=i;
        int nextj=j+1;

        if(j+1==9)
        {
            nexti=i+1;
            nextj=0;
        }

        if(board[i][j]!='.')
            return solve(board,nexti,nextj);

        for(char k='1'; k<='9'; k++)
        {
            if(check(board,i,j,k))
            {
                board[i][j]=k;
                if(solve(board,nexti,nextj))
                    return true;
                board[i][j]='.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
        solve(board,0,0);
    }
};
