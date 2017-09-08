#include<vector>
#include<cmath>
int solution(vector<int> &A) {
    int N=A.size();
    if(N<=2)
        return 0;
    vector<int> peaks;
    for(int i=1; i<N-1; i++)
    {
        if(A[i]>A[i-1] and A[i]>A[i+1])
        {
            peaks.push_back(i);
            i++;
        }
    }
    int size=peaks.size();
    if(size<=2)
        return size;
    int maxflag=sqrt(peaks[size-1]-peaks[0])+1;
    for(int i=maxflag; i>=2; i--)
    {
        int cur=peaks[0];
        int count=1;
        for(int j=1; j<size and count<i; j++)
        {

            if(peaks[j]-cur>=i)
            {
                cur=peaks[j];
                count++;
            }
        }
        if(count==i)
            return i;
    }
    return 2;
}
