vector<int> solution(string &S, vector<int> &P, vector<int> &Q) {
    int N = S.length();
    int M= P.size();
    static int A[100002];
    static int C[100002];
    static int G[100002];
    int begin;
    int end;
    for(int i=0; i<N; i++)
    {
        switch(S[i]) {
        case 'A':
            A[i+1]++;
            break;
        case 'C':
            C[i+1]++;
            break;
        case 'G':
            G[i+1]++;
            break;
        case 'T':
            break;
        }
        A[i+2]=A[i+1];
        C[i+2]=C[i+1];
        G[i+2]=G[i+1];
    }
    vector<int> result;
    for(int i=0; i<M; i++)
    {
        begin = P[i];
        end = Q[i]+1;
        if(A[end]-A[begin])
            result.push_back(1);
        else if(C[end]-C[begin])
            result.push_back(2);
        else if(G[end]-G[begin])
            result.push_back(3);
        else
            result.push_back(4);
    }
    return result;
}
