class Solution {
public:
    int m;
    int n;
    bool solve(vector<vector<char>>& board, string& word,int idx,int i,int j)
    {
        if(idx==word.length())
            return true;
        if(i<0||j<0||i>=m||j>=n||word[idx]!=board[i][j])
            return false;
        board[i][j]='\0';
        if(solve(board,word,idx+1,i+1,j) || solve(board,word,idx+1,i-1,j)
                || solve(board,word,idx+1,i,j+1) || solve(board,word,idx+1,i,j-1))
            return true;
        board[i][j]=word[idx];
        return false;
    }
    bool exist(vector<vector<char>>& board, string word) {
        m=board.size();
        if(!m)
            return false;
        n=board.front().size();
        if(!n)
            return false;
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(solve(board,word,0,i,j))
                    return true;
        return false;
    }
};
