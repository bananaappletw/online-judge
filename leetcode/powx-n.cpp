class Solution {
public:
    double myPow(double x, int n) {
        double answer=1;
        bool negative=false;
        unsigned int m=n;
        double y=x;
        if(n<0)
        {
            m=~n+1;
            negative=true;
            y=1/x;
        }
        while(m)
        {
            if(m&1)
                answer*=y;
            m>>=1;
            y*=y;
        }
        return answer;
    }
