class Solution {
public:
    string countAndSay(int n) {
        string answer="1";
        for(int i=0; i<n-1; i++)
        {
            string temp="";
            char cur='.';
            int count=0;
            for(auto c:answer)
            {
                if(c!=cur)
                {
                    if(count)
                        temp+=to_string(count)+cur;
                    cur=c;
                    count=0;
                }
                count++;
            }
            if(count)
                temp+=to_string(count)+cur;
            answer=temp;
        }
        return answer;
    }
};
