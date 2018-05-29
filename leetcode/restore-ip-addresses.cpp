class Solution {
public:
    vector<string> restoreIpAddresses(string s) {
        vector<string> answer;
        for(int i=1; i+3<=s.length() && i<=3; i++)
        {
            if(stoi(s.substr(0,i))>255 || (i>1 && s[0] == '0'))
                continue;
            for(int j=i+1; j+2<=s.length() && j<=i+3; j++)
            {
                if(stoi(s.substr(i,j-i))>255 || (j-i>1 && s[i] == '0'))
                    continue;
                for(int k=j+1; k+1<=s.length() && k<=j+3; k++)
                {
                    if(stoi(s.substr(j,k-j))>255 || (k-j>1 && s[j] == '0'))
                        continue;
                    if(s.length()-k>3 || stoi(s.substr(k,s.length()-k))>255 || (s.length()-k>1 && s[k] == '0'))
                        continue;
                    answer.push_back(s.substr(0,i)+"."+s.substr(i,j-i)+"."+s.substr(j,k-j)+"."+s.substr(k,s.length()-k));
                }
            }
        }
        return answer;
    }
};
