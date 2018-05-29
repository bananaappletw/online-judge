class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto lb=lower_bound(nums.begin(),nums.end(),target);
        if(lb!=nums.end())
            return lb-nums.begin();
        else
            return nums.size();
    }
};
