// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <stack>
int solution(string &S) {
    stack<char> s;
    for(char c: S)
    {
        if(c=='(')
            s.push(c);
        else
        {
            if(s.empty())
                return 0;
            else
                s.pop();
        }
    }
    if(s.empty())
        return 1;
    else
        return 0;
}
