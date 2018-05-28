class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        stack<int> s;
        int original =x;
        while(x)
        {
            s.push(x%10);
            x/=10;
        }
        int reverse=0;
        int i=0;
        while(!s.empty()) {
            reverse+=s.top()*pow(10,i++);
            s.pop();
        }
        return original==reverse;
    }
};
