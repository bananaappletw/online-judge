vector<int> solution(vector<int> &A, int K) {
    vector<int> B;
    if(A.size() == 0)
        return B;
    K %= A.size();
    for(int i=A.size()-K; i<A.size(); i++)
        B.push_back(A[i]);
    for(int i=0; i<A.size()-K; i++)
        B.push_back(A[i]);
    return B;
}
