class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool square[3][3][10]= {false};
        bool row[9][10]= {false};
        bool col[9][10]= {false};
        for(int i=0; i<9; i++)
            for(int j=0; j<9; j++)
                if(board[i][j]!='.')
                {
                    int num=board[i][j]-'0';
                    if(!square[i/3][j/3][num])
                        square[i/3][j/3][num]=true;
                    else
                        return false;

                    if(!row[j][num])
                        row[j][num]=true;
                    else
                        return false;

                    if(!col[i][num])
                        col[i][num]=true;
                    else
                        return false;
                }
        return true;
    }
};
