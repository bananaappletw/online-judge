#include <climits>
#include <cstdlib>
int solution(vector<int> &A) {
    int N = A.size();
    int hash[N];
    int min=INT_MAX;
    int sum=0;
    for(int i=0; i<N; i++) {
        sum += A[i];
        hash[i] = sum;
    }
    for(int i=1; i<N; i++)
    {
        if(abs(sum - 2*hash[i-1]) < min )
        {
            min = abs(sum - 2*hash[i-1]);
        }
    }
    return min;
}
