#include <algorithm>
int solution(vector<int> &A) {
    int N = A.size();
    if (N<3)
        return 0;
    sort(A.begin(),A.end());
    for(int i=0; i<N-2; i++)
        if(A[i]>0 and A[i]>A[i+2]-A[i+1])
            return 1;
    return 0;
}
