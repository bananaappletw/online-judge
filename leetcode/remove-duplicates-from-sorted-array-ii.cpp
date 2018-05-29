class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        if(!n)
            return 0;
        int i=0;
        for(auto num:nums)
            if(i<2 || num!=nums[i-2])
                nums[i++]=num;
        nums.erase(nums.begin()+i,nums.end());
        return i;
    }
};
