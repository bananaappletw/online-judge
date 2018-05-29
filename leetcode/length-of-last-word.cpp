class Solution {
public:
    int lengthOfLastWord(string s) {
        s = s.substr(0,s.find_last_not_of(' ')+1);
        size_t space = s.find_last_of(' ');
        int n=s.length();
        if(!n)
            return 0;
        return s.length()-space-1;
    }
};
