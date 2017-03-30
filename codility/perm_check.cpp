int solution(vector<int> &A) {
    int N = A.size();
    bool hash[1000000001];
    for(int i=0; i<N; i++)
        if( A[i] <= N and hash[A[i]] == false)
            hash[A[i]]= true;
        else
            return false;
    return true;
}
