// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;
#include<cmath>
int solution(int N) {
    for(int i=sqrt(N); i>=1; i--)
    {
        if(N%i==0)
            return 2*(N/i+i);
    }
}
