#include <stack>
int solution(string &S) {
    int N = S.length();
    stack<int> data;
    for(int i=0; i<N; i++)
    {
        if(S[i]=='{' or S[i]=='[' or S[i]=='(')
            data.push(S[i]);
        else if(S[i]=='}' or S[i]==']' or S[i]==')') {
            if(!data.empty() and
                    ((S[i]=='}' and data.top()=='{') or
                     (S[i]==']' and data.top()=='[') or
                     (S[i]==')' and data.top()=='(')))
                data.pop();
            else
                return 0;
        }
    }
    if(!data.empty())
        return 0;
    return 1;
}
