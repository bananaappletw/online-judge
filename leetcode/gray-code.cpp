class Solution {
public:
    vector<int> grayCode(int n) {
        if(n==0)
            return vector<int> (1,0);
        vector<int> ori = grayCode(n-1);
        int lens=ori.size();
        vector<int> ret(lens*2);
        copy(ori.begin(),ori.end(),ret.begin());
        for(auto&& i:ori)
            i+=1<<n-1;
        copy(ori.rbegin(),ori.rend(),ret.begin()+lens);
        return ret;
    }
};
