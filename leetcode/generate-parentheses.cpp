class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> answer;
        if(n)
            gen(answer,n,n,"");
        return answer;
    }
    void gen(vector<string>& answer,int left,int right,string s)
    {
        if(!left&&!right)
            answer.push_back(s);
        if(left)
            gen(answer,left-1,right,s+'(');
        if(right&&left<right)
            gen(answer,left,right-1,s+')');
    }
};
