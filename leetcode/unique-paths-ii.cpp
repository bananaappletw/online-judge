class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {
        int m=obstacleGrid.size();
        int n=obstacleGrid.front().size();
        int path[m][n];
        memset(path,0,m*n*sizeof(int));
        for(int i=0; i<m; i++)
        {
            if(obstacleGrid[i][0]==1)
                break;
            path[i][0]=1;
        }
        for(int i=0; i<n; i++)
        {
            if(obstacleGrid[0][i]==1)
                break;
            path[0][i]=1;
        }
        for(int i=1; i<m; i++)
            for(int j=1; j<n; j++)
            {
                if(obstacleGrid[i][j]==1)
                    continue;
                path[i][j]=path[i-1][j]+path[i][j-1];
            }
        return path[m-1][n-1];

    }
};
