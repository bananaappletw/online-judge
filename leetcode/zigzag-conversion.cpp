class Solution {
public:
    string convert(string s, int numRows) {
        string answer;
        if(numRows<2)
            return s;
        for(int j=0; j<=numRows-1; j++)
        {
            for(int i=0; i<s.size(); i++)
            {
                int mod=2*numRows-2;
                if((i%mod==j) || (i%mod==mod-j))
                {
                    answer.push_back(s[i]);
                }
            }
        }
        return answer;
    }
};
