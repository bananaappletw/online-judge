class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer=INT_MIN;
        int start=0;
        int end=height.size()-1;
        while(start<end)
        {
            int h=min(height[start],height[end]);
            answer=max(answer,h*(end-start));
            while(height[start]<=h&&start<end)
                start++;
            while(height[end]<=h&&start<end)
                end--;
        }
        return answer;
    }
};
