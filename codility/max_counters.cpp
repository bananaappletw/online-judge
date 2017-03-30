#include <algorithm>
vector<int> solution(int N, vector<int> &A) {
    int last_max = 0;
    int cur_max = 0;
    vector<int> result(N,0);
    for(int i=0; i<A.size(); i++)
    {
        if(A[i]==N+1)
        {
            last_max=cur_max;
        }
        else {
            result[A[i]-1]=max(result[A[i]-1],last_max);
            result[A[i]-1]++;
            cur_max = max(result[A[i]-1],cur_max);
        }
    }
    for (int i=0; i<N; i++)
    {
        result[i] = max(result[i],last_max);
    }
    return result;
}
