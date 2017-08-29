#include <stack>
int solution(vector<int> &A, vector<int> &B) {
    int N = A.size();
    int num=0;
    stack <int> a;
    for(int i=0; i<N; i++)
    {
        if(B[i]==0)
        {
            while(!a.empty() and a.top()<A[i])
            {
                a.pop();
            }
        }
        else
        {
            a.push(A[i]);
        }
        if(a.empty() and B[i]==0)
        {
            num++;
        }
    }
    return num+a.size();
}
