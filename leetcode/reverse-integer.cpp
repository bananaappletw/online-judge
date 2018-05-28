class Solution {
public:
    int reverse(int x) {

        bool negative=false;
        int answer=0;
        if(x<0)
        {
            negative = true;
            x*=-1;
        }
        while(x)
        {
            int carry=x%10;
            x/=10;
            if(answer>(INT_MAX-carry)/10)
                return 0;
            answer*=10;
            answer+=carry;
        }
        if(negative)
            answer*=-1;
        return answer;
    }
};
