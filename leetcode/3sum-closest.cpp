class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int answer;
        int sum=INT_MAX;
        for (int i = 0; i < int(nums.size())-2; i++) {
            int start = i+1;
            int end = nums.size()-1;
            while (start < end) {
                if(abs(target - nums[i] -nums[start] - nums[end]) < sum)
                {
                    answer = nums[i] + nums[start] + nums[end];
                    sum = abs(target - answer);
                }
                if (nums[i] + nums[start] + nums[end] < target )
                    start++;
                else if (nums[i] + nums[start] + nums[end]  > target )
                    end--;
                else {
                    break;
                }
            }
        }
        return answer;
    }
};
