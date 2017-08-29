// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include <climits>
int solution(vector<int> &A) {
    int max_slice=INT_MIN;
    int max_end=0;
    for(auto i: A)
    {
        max_end=max(i,max_end+i);
        max_slice=max(max_slice,max_end);
    }
    return max_slice;
}
