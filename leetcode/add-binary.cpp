class Solution {
public:
    string addBinary(string a, string b) {
        string answer;
        auto ita=a.rbegin();
        auto itb=b.rbegin();
        int sum=0;
        while(ita!=a.rend()&&itb!=b.rend())
        {
            sum+=*ita-'0'+*itb-'0';
            answer=(char)('0'+sum%2)+answer;
            sum/=2;
            ita++;
            itb++;
        }
        while(ita!=a.rend())
        {
            sum+=*ita-'0';
            answer=(char)('0'+sum%2)+answer;
            sum>>=1;
            ita++;
        }
        while(itb!=b.rend())
        {
            sum+=*itb-'0';
            answer=(char)('0'+sum%2)+answer;
            sum>>=1;
            itb++;
        }
        if(sum)
            answer=(char)('0'+sum%2)+answer;
        return answer;

    }
};
