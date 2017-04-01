#include<unordered_set>
int solution(vector<int> &A) {
    unordered_set<int> hash;
    for(int i=0; i<A.size(); i++)
        hash.insert(A[i]);
    return hash.size();
}
