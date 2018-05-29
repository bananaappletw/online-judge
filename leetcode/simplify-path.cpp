class Solution {
public:
    string simplifyPath(string path) {
        stack<string> s;
        stringstream ss(path);
        string p;
        while(getline(ss,p,'/'))
        {
            if(p=="" || p==".")
                continue;
            if(p=="..")
            {
                if(!s.empty())
                    s.pop();
            }
            else
                s.push(p);
        }
        string answer;
        while(!s.empty())
        {
            answer="/"+s.top()+answer;
            s.pop();
        }
        if(answer=="")
            return "/";
        else
            return answer;
    }
};
