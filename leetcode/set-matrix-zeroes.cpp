class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        if(!m)
            return;
        int n=matrix.front().size();
        if(!n)
            return;
        bool rows[m]= {false};
        bool cols[n]= {false};
        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(!matrix[i][j])
                    rows[i]=cols[j]=true;

        for(int i=0; i<m; i++)
            for(int j=0; j<n; j++)
                if(rows[i] || cols[j])
                    matrix[i][j]=0;

    }
};
