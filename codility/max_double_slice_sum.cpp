// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int N=A.size();
    int max_val=0;
    static int X[100000];
    static int Z[100000];
    for(int i=1; i<N-1; i++)
    {
        X[i]=max(X[i-1]+A[i],0);
    }
    for(int i=N-2; i>0; i--)
    {
        Z[i]=max(Z[i+1]+A[i],0);
    }
    for(int i=1; i<N-1; i++)
    {
        max_val=max(max_val,X[i-1]+Z[i+1]);
    }
    return max_val;
}
