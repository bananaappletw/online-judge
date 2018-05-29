class Solution {
public:
    vector<string> letterCombinations(string digits) {
        string s[10]= {"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        vector<string> answer;
        if(digits.empty())
            return answer;
        answer.push_back("");
        for(auto c: digits)
        {
            vector<string> temp;
            for(auto c: s[c-'0'])
            {
                for(auto original: answer)
                    temp.push_back(original+c);
            }
            answer=temp;
        }
        return answer;
    }
};
