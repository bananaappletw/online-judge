int solution(int X, vector<int> &A) {
    int N = A.size();
    static bool leaves[100001];
    int count = 0;
    for(int i=0; i<N; i++) {
        if(leaves[A[i]] ==false)
        {
            leaves[A[i]]=true;
            count++;
        }
        if (count== X)
            return i;
    }
    return -1;
}
