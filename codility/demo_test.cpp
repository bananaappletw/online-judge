int solution(vector<int> &A) {
    int N = A.size();
    long long int hash[N];
    long long int sum =0;
    for(int i=0; i<N; i++) {
        sum+=A[i];
        hash[i]=sum;
    }
    for(int i=0; i<N; i++) {
        if(hash[i]-A[i] == sum - hash[i])
            return i;
    }
    return -1;
}
