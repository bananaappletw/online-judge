class Solution {
public:
    int minDistance(string word1, string word2) {
        int m=word1.length();
        int n=word2.length();
        if(!m)
            return n;
        if(!n)
            return m;
        int dp[m+1][n+1];
        for(int i=0; i<m+1; i++)
            dp[i][0]=i;
        for(int i=0; i<n+1; i++)
            dp[0][i]=i;

        for(int i=1; i<m+1; i++)
            for(int j=1; j<n+1; j++)
                if(word1[i-1]==word2[j-1])

