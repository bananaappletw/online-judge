class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=haystack.size();
        int m=needle.size();
        if(!m)
            return 0;
        int failure[m];
        failure[0]=-1;
        for(int i=1,j=failure[0]; i<m; i++)
        {
            while(j>=0&&needle[i]!=needle[j+1])
                j=failure[j];
            if(needle[i]==needle[j+1])
                j++;
            failure[i]=j;
        }

        for(int i=0,j=-1; i<n; i++)
        {
            while(j>=0&&haystack[i]!=needle[j+1])
                j=failure[j];
            if(haystack[i]==needle[j+1])
                j++;
            if(j==m-1)
                return i-j;
        }
        return -1;
    }
};
