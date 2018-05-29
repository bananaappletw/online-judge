class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.empty())
            return "";
        int minimum=INT_MAX;
        int i;
        for(auto str: strs)
            minimum=min(minimum, int(str.size()));
        for(i =0; i<minimum; i++)
        {
            char c=strs[0][i];
            bool same=true;
            for(auto str: strs)
            {
                if(str[i]!=c)
                {
                    same=false;
                    break;
                }
            }
            if(!same)
                break;
        }
        return strs[0].substr(0,i);
    }
};
