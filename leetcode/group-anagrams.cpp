class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> answer;
        map<string,int> hash;
        int idx=0;
        for(auto str: strs)
        {
            int alpha[26]= {0};
            for(auto c: str)
            {
                alpha[c-'a']++;
            }
            string s;
            for(int i=0; i<26; i++)
                s+=string(alpha[i],'a'+i);
            if(hash.count(s))
            {
                answer[hash[s]].push_back(str);
            }
            else
            {
                hash[s]=idx++;
                answer.push_back(vector<string> {str});
            }
        }
        return answer;
    }
};
