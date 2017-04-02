// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include <algorithm>
int solution(vector<int> &A) {
    int N=A.size();
    vector<long long> left;
    vector<long long> right;
    int lower_bound=0;
    int upper_bound=0;
    int ans=0;
    for(long i=0; i<N; i++)
    {
        left.push_back(i-A[i]);
        right.push_back(i+A[i]);
    }
    sort(left.begin(),left.end());
    sort(right.begin(),right.end());
    for(upper_bound=0; upper_bound<N; upper_bound++)
    {
        while(lower_bound<N and left[lower_bound]<=right[upper_bound])
            lower_bound++;
        ans+= lower_bound-upper_bound-1;
        if(ans>10000000)
            return -1;
    }
    return ans;
}
