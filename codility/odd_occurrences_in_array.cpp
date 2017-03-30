#include <unordered_map>
#include <utility>
using namespace std;
int solution(vector<int> &A) {
    unordered_map<int, int> hash;
    for(int i=0; i< A.size(); i++)
    {
        if (hash.find(A[i]) == hash.end())
            hash.insert(make_pair(A[i],1));
        else
            hash.erase(A[i]);
    }
    return hash.begin()->first;
}
