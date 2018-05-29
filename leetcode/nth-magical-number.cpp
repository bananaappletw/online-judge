class Solution {
public:
    int gcd(int a, int b)
    {
        if (a==0)
            return b;
        return gcd(b%a, a);
    }
    int nthMagicalNumber(int N, int A, int B) {
        int m=1e9+7;
        int lcm=A/gcd(A,B)*B;
        int count=lcm/A+lcm/B-1;
        int q=N/count;
        int r=N%count;
        long answer=(long)q*lcm%m;
        if(r==0)
            return answer;
        int As=A;
        int Bs=B;
        for(int i=0; i<r-1; i++)
            if(As<Bs)
                As+=A;
            else
                Bs+=B;
        answer+=min(As,Bs);
        answer%=m;
        return answer;
    }
};
