#include <unordered_map>
int solution(vector<int> &A) {
    unordered_map<int,int> hash;
    for(int i=1; i<=A.size()+1; i++)
    {
        hash[i] = i;
    }
    for(int i=0; i<A.size(); i++)
    {
        if(hash.find(A[i])!=hash.end())
        {
            hash.erase(A[i]);
        }
    }
    return hash.begin()->first;
}
