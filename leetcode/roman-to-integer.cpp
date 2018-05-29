class Solution {
public:
    int romanToInt(string s) {
        int answer=0;
        char c[4][3]= {{'I','V','X'},{'X','L','C'},{'C','D','M'},{'M',' ',' '}};
        int j=s.size()-1;
        for(int i=0; i<4; i++)
        {
            int carry=0;
            bool minus=false;
            for(; j>=0; j--)
            {
                if(s[j]==c[i][2])
                {
                    carry+=10;
                    minus=true;
                }
                else if(s[j]==c[i][1])
                {
                    carry+=5;
                    minus=true;
                }
                else if(s[j]==c[i][0])
                {
                    if(minus)
                        carry-=1;
                    else
                        carry+=1;
                }
                else
                    break;
            }
            answer+=carry*pow(10,i);
            if(j<0)
                break;
        }
        return answer;
    }
};
