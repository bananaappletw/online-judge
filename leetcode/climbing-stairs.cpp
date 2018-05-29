class Solution {
public:
    vector<vector<int>> mul(vector<vector<int>> a,vector<vector<int>> b)
    {
        vector<vector<int>> ret{{0,0},{0,0}};
        for(int i=0; i<2; i++)
            for(int j=0; j<2; j++)
                for(int x=0; x<2; x++)
                    ret[i][j]+=a[i][x]*b[x][j];
        return ret;
    }
    int climbStairs(int n) {
        vector<vector<int>> M{{1,1},{1,0}};
        vector<vector<int>> answer{{1,0},{0,1}};
        while(n)
        {
            if(n&1)
                answer=mul(answer,M);
            n>>=1;
            M=mul(M,M);
        }

        return answer[0][0];
    }
};
