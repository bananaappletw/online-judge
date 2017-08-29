// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <stack>
int solution(vector<int> &H) {
    stack<int> s;
    int num=0;
    for(auto i: H)
    {
        while(!s.empty() and i < s.top())
        {
            s.pop();
        }
        if(s.empty() or s.top() < i)
        {
            s.push(i);
            num++;
        }
    }
    return num;
}
