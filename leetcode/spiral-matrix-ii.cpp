class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> answer(n,vector<int>(n,0));
        int left(0),right(n-1);
        int top(0),down(n-1);
        int x(0),y(0);
        int cnt=1;
        while(left<=right&&top<=down)
        {
            for(int i=left; i<=right; i++)
                answer[top][i]=cnt++;
            top++;
            for(int i=top; i<=down; i++)
                answer[i][right]=cnt++;
            right--;
            for(int i=right; i>=left; i--)
                answer[down][i]=cnt++;
            down--;
            for(int i=down; i>=top; i--)
                answer[i][left]=cnt++;
            left++;
        }
        return answer;
    }
};
