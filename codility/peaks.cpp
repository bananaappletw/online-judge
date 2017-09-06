// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
#include<list>
int solution(vector<int> &A) {
    static int peaks[100001];
    list<int> rest;
    int N=A.size();
    for(int i=1; i<N-1; i++)
        if(A[i]>A[i-1] and A[i]>A[i+1])
            peaks[i+1]++;
    for(int i=1; i<=N; i++)
        peaks[i+1]+=peaks[i];
    for(int i=1; i<=sqrt(N); i++)
        if(N%i==0)
        {
            rest.push_back(i);
            if(N/i!=i)
                rest.push_back(N/i);
        }
    rest.sort();
    for(auto i: rest)
    {
        bool valid=true;
        for(int j=0; j<N/i; j++)
        {
            if(peaks[(j+1)*i]==peaks[j*i])
            {
                valid = false;
                break;
            }
        }
        if(valid)
            return N/i;
    }
    return 0;
}
