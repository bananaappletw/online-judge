class Solution {
public:
    string minWindow(string s, string t) {
        int slen=s.length();
        int tlen=t.length();
        if(!slen || !tlen)
            return "";
        int hash[128]= {0};
        int n=0;
        int head=0;
        int minimum=INT_MAX;
        int begin=0;
        for(auto c: t)
            hash[c]++;
        for(int i=0; i<slen; i++)
        {
            if(hash[s[i]]-->0)
                n++;
            while(n==tlen)
            {
                if(i-begin+1<minimum)
                {
                    head=begin;
                    minimum=i-begin+1;
                }
                if(hash[s[begin]]++==0)
                    n--;
                begin++;
            }
        }
        if(minimum==INT_MAX)
            return "";
        else
            return s.substr(head,minimum);
    }
};
