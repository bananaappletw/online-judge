class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> answer;
        for (int i = 0; i < int(nums.size())-2; i++) {
            if (nums[i] > 0)
                break;
            int target = -nums[i];
            int start = i+1;
            int end = nums.size()-1;
            while (start < end) {
                if (nums[start] + nums[end] < target)
                    start++;
                else if (nums[start] + nums[end]  > target)
                    end--;
                else {
                    vector<int> temp{nums[i], nums[start], nums[end]};
                    answer.push_back(temp);
                    while (start < end && nums[start] == temp[1])
                        start++;
                    while (start < end && nums[end] == temp[2])
                        end--;
                }
            }
            while (i < nums.size() && nums[i+1] == nums[i])
                i++;
        }
        return answer;
    }
};
