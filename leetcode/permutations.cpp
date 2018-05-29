class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        int n=nums.size();
        bool flag;
        vector<vector<int>> answer;
        sort(nums.begin(),nums.end());
        answer.push_back(nums);
        do
        {
            flag=false;
            int k,l;
            for(int i=n-2; i>=0; i--)
                if(nums[i]<nums[i+1])
                {
                    flag=true;
                    k=i;
                    break;
                }
            if(!flag)
                continue;
            for(int i=n-1; i>=0; i--)
                if(nums[i]>nums[k])
                {
                    l=i;
                    break;
                }
            swap(nums[k],nums[l]);
            reverse(nums.begin()+k+1,nums.end());
            answer.push_back(nums);
        } while(flag);

        return answer;
    }
};
