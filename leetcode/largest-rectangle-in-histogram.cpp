class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        if(!n)
            return n;
        int left[n];
        int right[n];
        left[0]=0;
        for(int i=1; i<n; i++)
        {
            int mostleft=i;
            while(mostleft-1>=0&&heights[mostleft-1]>=heights[i])
                mostleft=left[mostleft-1];
            left[i]=mostleft;
        }

        right[n-1]=n-1;
        for(int i=n-2; i>=0; i--)
        {
            int mostright=i;
            while(mostright+1<n&&heights[mostright+1]>=heights[i])
                mostright=right[mostright+1];
            right[i]=mostright;
        }
        int answer=INT_MIN;
        for(int i=0; i<n; i++)
            answer=max(answer,(right[i]-left[i]+1)*heights[i]);
        return answer;
    }
};
