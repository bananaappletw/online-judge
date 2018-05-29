class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        vector<vector<int>> answer;
        for(int i=0; i<n-3; i++)
        {
            if(nums[i]+nums[i+1]+nums[i+2]+nums[i+3]>target)
                break;
            if(nums[i]+nums[n-3]+nums[n-2]+nums[n-1]<target)
                continue;
            for(int j=i+1; j<n-2; j++)
            {
                if(nums[i]+nums[j]+nums[j+1]+nums[j+2]>target)
                    break;
                if(nums[i]+nums[j]+nums[n-2]+nums[n-1]<target)
                    continue;
                int start=j+1;
                int end=n-1;
                while(start<end)
                {
                    int sum=nums[i]+nums[j]+nums[start]+nums[end];
                    if(sum<target)
                        start++;
                    else if(sum>target)
                        end--;
                    else
                    {
                        answer.push_back(vector<int> {nums[i],nums[j],nums[start],nums[end]});
                        do
                            start++;
                        while(nums[start-1]==nums[start]&&start<end);
                        do
                            end--;
                        while(nums[end]==nums[end+1]&&start<end);
                    }
                }
                while(nums[j]==nums[j+1] && j<n-3)
                    j++;
            }
            while(nums[i]==nums[i+1] && i<n-4)
                i++;
        }
        return answer;
    }
};
