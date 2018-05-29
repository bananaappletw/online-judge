class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> answer;
        int m=matrix.size();
        if(!m)
            return answer;
        int n=matrix.front().size();
        int i=0,j=0;
        while(n&&m)
        {
            if(m==1)
            {
                for(int k=0; k<n; k++)
                    answer.push_back(matrix[i][j++]);
                break;
            }
            if(n==1)
            {
                for(int k=0; k<m; k++)
                    answer.push_back(matrix[i++][j]);
                break;
            }
            for(int k=0; k<n-1; k++)
                answer.push_back(matrix[i][j++]);
            for(int k=0; k<m-1&&n>1; k++)
                answer.push_back(matrix[i++][j]);
            for(int k=0; k<n-1&&m>1; k++)
                answer.push_back(matrix[i][j--]);
            for(int k=0; k<m-1&&n>1; k++)
                answer.push_back(matrix[i--][j]);
            i++;
            j++;
            n-=2,m-=2;
        }
        return answer;
    }
};
