class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        if(!n)
            return 0;
        int sum=0;
        int total=INT_MIN;
        for(int i=0; i<n; i++)
        {
            sum=max(sum+nums[i],nums[i]);
            total=max(total,sum);
        }
        return total;
    }
};
