class Solution {
public:
    bool isPalindrome(string s) {
        int lens=s.length();
        if(!lens)
            return true;
        int left=0;
        int right=lens-1;
        while(left<right) {
            while(left<lens&&!isalnum(s[left]))
                left++;
            while(right>=0&&!isalnum(s[right]))
                right--;
            if(left<=right&&tolower(s[left])!=tolower(s[right]))
                return false;
            left++;
            right--;
        }
        return true;
    }
};
