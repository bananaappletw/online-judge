class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> answer;
        int n=nums.size();
        int all=pow(2,n);
        for(int i=0; i<all; i++)
        {
            vector<int> temp;
            for(int j=0; j<n; j++)
                if((i>>j)&1)
                    temp.push_back(nums[j]);
            answer.push_back(temp);
        }
        return answer;
    }
};
