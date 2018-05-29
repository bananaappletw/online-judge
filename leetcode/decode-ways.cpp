class Solution {
public:
    int numDecodings(string s) {
        if(s.length()==0)
            return 0;
        if(s[0]=='0')
            return 0;

        int first=1,second=1;

        for(int i=1; i<s.length(); i++)
        {
            int temp=0;
            if(s[i-1]=='1' || (s[i-1] == '2' && s[i]<='6'))
                temp+=first;
            if(s[i]>='1' && s[i]<='9')
                temp+=second;
            first=second;
            second=temp;
        }
        return second;
    }
};
