// you can use includes, for example:
// #include <algorithm>

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(vector<int> &A) {
    int buy= 200000;
    int profit=0;
    for(int i: A)
    {
        buy = min(buy,i);
        profit = max(profit,i-buy);
    }
    return profit;
}
