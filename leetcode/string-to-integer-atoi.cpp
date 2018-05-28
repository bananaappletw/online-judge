class Solution {
public:
    int myAtoi(string str) {
        int i=0;
        int answer=0;
        bool negative=false;
        while(str[i]==' ')
            i++;
        if(str[i]=='-')
        {
            negative=true;
            i++;
        }
        else if(str[i]=='+')
            i++;

        while(isdigit(str[i]))
        {
            int carry=str[i]-'0';
            if(!negative)
            {
                if(answer>(INT_MAX-carry)/10)
                    return INT_MAX;
            }
            else
            {
                if(-answer<(INT_MIN+carry)/10)
                    return INT_MIN;
            }
            answer*=10;
            answer+=carry;
            i++;
        }
        if(negative)
            answer*=-1;
        return answer;
    }
};
