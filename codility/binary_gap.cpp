int solution(int N) {
    int max = 0;
    int cur = 0;
    bool flag=false;
    while(N)
    {
        if(N%2 == 0 )
        {
            if(flag)
                cur++;
        }
        else {
            flag = true;
            cur=0;
        }
        if(cur > max)
            max = cur;
        N/=2;
    }
    return max;
}

