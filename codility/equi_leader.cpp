// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>
int solution(vector<int> &A) {
    int size=0;
    int num=0;
    int candidate;
    int N=A.size();
    for(int i=0; i<N; i++)
    {
        if(size==0)
        {
            size++;
            candidate=A[i];
        }
        else
        {
            if(A[i]!=candidate)
                size--;
            else
                size++;
        }
    }
    if(size==0)
        return 0;
    int cnt = count(A.begin(),A.end(),candidate);
    if(cnt <=N/2)
        return 0;
    int cur=0;
    for(int i=0; i<N; i++)
    {
        if(A[i]==candidate)
            cur++;
        if(cur>(i+1)/2 and cnt-cur > (N-i-1)/2)
            num++;
    }
    return num;
}
