class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<2)
            return 0;
        int cur_max=0;
        int next_max=0;
        int jump=0;
        for(int i=0; i<n; i++)
        {
            if(i>cur_max)
            {
                jump++;
                cur_max=next_max;
            }
            if(cur_max>=n-1)
                return jump;
            next_max=max(next_max,i+nums[i]);
        }
    }
};
