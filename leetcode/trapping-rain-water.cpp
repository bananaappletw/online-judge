class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        int answer=0;
        int left=0;
        int right=n-1;
        int leftmost=0;
        int rightmost=0;
        while(left<right)
        {
            leftmost=max(leftmost,height[left]);
            rightmost=max(rightmost,height[right]);
            if(leftmost<rightmost)
            {
                answer+=leftmost-height[left];
                left++;
            }
            else
            {
                answer+=rightmost-height[right];
                right--;
            }
        }
        return answer;
    }
};
