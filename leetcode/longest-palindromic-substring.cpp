class Solution {
public:
    string longestPalindrome(string s) {
        int max = 0;
        int start=0,end=0;
        int length = s.size();
        bool dp[length][length];
        for(int i=0; i<length; i++) {
            for(int j=0; j<i; j++) {
                if(s[i]==s[j] && (i-j<2 || dp[j+1][i-1]))
                    dp[j][i]=true;
                else
                    dp[j][i]=false;
                if(dp[j][i] && i-j+1>max) {
                    max=i-j+1;
                    start=j;
                    end=i;
                }
            }
            dp[i][i]=true;
        }
        return s.substr(start,end-start+1);
    };
};
