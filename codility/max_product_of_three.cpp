#include <algorithm>
int solution(vector<int> &A) {
    int N = A.size();
    sort(A.begin(),A.end());
    return max(A[N-1]*A[N-2]*A[N-3],A[N-1]*A[0]*A[1]);
}
