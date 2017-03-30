int solution(vector<int> &A) {
    int N=A.size();
    bool hash[100001]= {false};
    for(int i=0; i<N; i++)
    {
        if ( 1 <= A[i] and A[i] <= N)
            hash[A[i]]=true;
    }
    for(int i=1; i<=100000; i++)
        if(hash[i]==false)
            return i;
}

