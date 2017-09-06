// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

#include<cmath>
int solution(int N) {
    int count=0;
    for(auto i=1; i<=sqrt(N); i++)
    {
        if(N%i==0)
        {
            if(N/i==i)
                count++;
            else
                count+=2;
        }
    }
    return count;
}
