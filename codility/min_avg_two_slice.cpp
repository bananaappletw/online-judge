int solution(vector<int> &A) {
    int N=A.size();
    int ans=0;
    double min = (A[0]+A[1])/2.0;
    for(int i=2; i<N; i++) {
        if ((A[i - 1] + A[i]) / 2.0 < min)
        {
            min = (A[i - 1] + A[i]) / 2.0 ;
            ans = i-1;
        }

        if ((A[i - 2] + A[i - 1] + A[i]) / 3.0 < min)
        {
            min = (A[i - 2] + A[i - 1] + A[i]) / 3.0;
            ans = i-2;
        }
    }
    return ans;
}
