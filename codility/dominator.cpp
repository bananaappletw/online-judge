// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <algorithm>

int solution(vector<int> &A) {
    int N=A.size();
    int candidate;
    int size=0;
    for(int i=0; i<N; i++)
    {
        if(size==0)
        {
            size++;
            candidate=A[i];
        }
        else
        {
            if(candidate==A[i])
                size++;
            else
                size--;
        }
    }
    if(size==0)
        return -1;
    if(count(A.begin(),A.end(),candidate)<=N/2)
        return -1;
    for(int i=0; i<N; i++)
        if(candidate==A[i])
            return i;
}
