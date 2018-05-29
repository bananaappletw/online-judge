class Solution {
public:
    bool isInterleave(string s1, string s2, string s3) {
        int m=s1.length();
        int n=s2.length();
        int o=s3.length();
        if(m+n!=o)
            return false;

        bool dp[m+1][n+1];
        for(int i=0; i<=m; i++)
            for(int j=0; j<=n; j++)
                dp[i][j]=false;

        dp[0][0]=true;
        for(int i=1; i<=m; i++)
            if(dp[i-1][0]&&s1[i-1]==s3[i-1])
                dp[i][0]=true;

        for(int j=1; j<=n; j++)
            if(dp[0][j-1]&&s2[j-1]==s3[j-1])
                dp[0][j]=true;

        for(int i=1; i<=m; i++)
            for(int j=1; j<=n; j++)
                if( (dp[i-1][j] && s1[i-1]==s3[i+j-1]) || (dp[i][j-1] && s2[j-1]==s3[i+j-1]) )
                    dp[i][j]=true;

        return dp[m][n];
    }
};
