int solution(vector<int> &A) {
    int N=A.size();
    static int left[100000];
    static int right[100001];
    int left_index=0;
    int sum = 0;
    for(int i=0; i<N; i++) {
        if(A[i]==0)
            left[left_index++]=i;
        else
            right[i]++;
        right[i+1]=right[i];
    }
    for(int i=0; i<left_index; i++)
    {
        sum+=right[N-1]-right[left[i]];
        if (sum > 1000000000)
            return -1;
    }
    return sum;
}
