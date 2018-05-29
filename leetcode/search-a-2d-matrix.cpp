class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m=matrix.size();
        if(!m)
            return false;
        int n=matrix.front().size();
        if(!n)
            return false;

        int left=0;
        int right=m*n-1;
        int middle;
        while(left<=right)
        {
            middle=(left+right)/2;

            if(target==matrix[middle/n][middle%n])
                return true;
            else if(target<matrix[middle/n][middle%n])
                right=middle-1;
            else
                left=middle+1;
        }
        return false;
    }
};
