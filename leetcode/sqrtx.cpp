class Solution {
public:
    int mySqrt(int x) {
        if(x<2)
            return x;
        int left=0;
        int right=x;
        int middle;
        while(left<=right)
        {
            middle=(left+right)/2;
            if(x/middle<middle)
                right=middle-1;
            else if(x/middle>middle)
                left=middle+1;
            else
                return middle;
        }
        return max(left,right)-1;
    }
};
