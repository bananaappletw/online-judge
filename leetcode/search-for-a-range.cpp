class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        auto lb = lower_bound(nums.begin(),nums.end(),target);
        auto ub = upper_bound(nums.begin(),nums.end(),target);
        if( lb==nums.end() || *lb!=target || (*(ub-1)!=target && ub==nums.end()))
            return vector<int> {-1,-1};
        else
            return vector<int> {lb-nums.begin(),ub-1-nums.begin()};
    }
};
