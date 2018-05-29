class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> answer;
        answer.push_back(vector<int>());
        unordered_map<int,int> freq;
        for(auto num:nums)
            freq[num]++;
        for(auto f:freq)
        {
            int n=answer.size();
            for(int i=0; i<n; i++)
            {
                auto pre=answer[i];
                for(int times=0; times<f.second; times++)
                {
                    pre.push_back(f.first);
                    answer.push_back(pre);
                }
            }
        }
        return answer;
    }
};
