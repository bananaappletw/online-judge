class Solution {
public:
    int longestValidParentheses(string s) {
        int answer=0;
        int n=s.length();
        if(!n)
            return answer;
        int dp[n]= {0};
        for(int i=1; i<n; i++)
        {
            if(s[i]!=')')
                continue;
            int left=i-1-dp[i-1];
            if(left>=0&&s[left]=='(')
            {
                dp[i]=dp[i-1]+2;
                if(i-dp[i]>=0)
                    dp[i]+=dp[i-dp[i]];
                answer=max(answer,dp[i]);
            }
        }
        return answer;
    }
};
