class Solution {
public:
    string getPermutation(int n, int k) {
        string s;
        vector<int> all;
        for(int i=1; i<=n; i++)
            all.emplace_back(i);
        int f[n];

        f[0]=1;

        for(int i=1; i<n; i++)
            f[i]=i*f[i-1];

        k--;
        while(k)
        {
            s+='0'+all[k/f[n-1]];
            all.erase(all.begin()+k/f[n-1]);
            k=k%f[n-1];
            n--;
        }

        for(auto i:all)
            s+='0'+i;

        return s;
    }
};
