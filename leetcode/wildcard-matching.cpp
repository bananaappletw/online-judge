class Solution {
public:
    bool isMatch(string s, string p) {
        int sidx=0;
        int pidx=0;
        bool star=false;
        int sstar;
        int pstar;
        int slens=s.length();
        int plens=p.length();
        while(sidx!=slens)
        {
            if(pidx!=plens && (p[pidx]==s[sidx] || p[pidx]=='?'))
            {
                sidx++;
                pidx++;
            }
            else if(pidx!=plens && p[pidx]=='*')
            {
                pidx++;
                star=true;
                sstar=sidx;
                pstar=pidx;
            }
            else if(star)
            {
                sidx=sstar+1;
                sstar++;
                pidx=pstar;
            }
            else
                return false;
        }

        while(pidx!=plens&&p[pidx]=='*')
            pidx++;

        return pidx==plens;
    }
};
