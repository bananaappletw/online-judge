class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.front().size();
        for(int i=0; i<n/2; i++)
        {
            int end=n-i-1;
            for(int j=i; j<end; j++)
            {
                int temp=matrix[i][j];
                matrix[i][j]=matrix[end+i-j][i];
                matrix[end+i-j][i]=matrix[end][end+i-j];
                matrix[end][end+i-j]=matrix[j][end];
                matrix[j][end]=temp;
            }
        }
    }
};
