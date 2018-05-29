class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        if(!n)
            return;
        int left=0;
        int right=n-1;
        for(; left<n; left++)
            if(nums[left]!=0)
                break;
        for(; right>=0; right--)
            if(nums[right]!=2)
                break;

        for(int i=left; i<=right;)
        {
            if(nums[i]==0)
            {
                swap(nums[i],nums[left]);
                for(; left<n; left++)
                    if(nums[left]!=0)
                        break;
                i=left;
            }
            else if(nums[i]==2)
            {
                swap(nums[i],nums[right]);
                for(; right>=0; right--)
                    if(nums[right]!=2)
                        break;
            }
            else
                i++;
        }

    }
};
