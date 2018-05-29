class Solution {
public:
    bool isValid(string s) {
        stack<char> temp;
        char parentheses[256]= {0};
        parentheses['('+128]=')';
        parentheses['['+128]=']';
        parentheses['{'+128]='}';
        int n=s.size();
        for(int i=0; i<n; i++)
        {
            if(parentheses[s[i]+128])
                temp.push(parentheses[s[i]+128]);
            else if(temp.empty())
                return false;
            else if(!temp.empty())
            {
                if(s[i]!=temp.top())
                    return false;
                temp.pop();
            }
        }
        if(!temp.empty())
            return false;
        return true;
    }
};
