class Solution {
public:
    int divide(int dividend, int divisor) {
        if(dividend==INT_MIN && divisor==-1)
            return INT_MAX;
        if(divisor==1)
            return dividend;
        int answer=0;
        bool negative=false;
        unsigned int a,b;
        if((dividend>0 && divisor<0)||(dividend<0 && divisor>0))
            negative=true;

        if(dividend<0)
            a=~dividend+1;
        else
            a=dividend;
        if(divisor<0)
            b=~divisor+1;
        else
            b=divisor;

        while(a>=b)
        {
            a-=b;
            answer++;
        }

        if(negative)
            answer*=-1;
        return answer;
    }
};
