public:
vector<int> findSubstring(string s, vector<string>& words) {
    vector<int> answer;
    int m=s.length();
    if(!m)
        return answer;
    int n=words.size();
    int p=(!words.empty())?words.front().length():0;
    int w=n*p;
    unordered_map<string, int> all;
    if(m<w)
        return answer;

    for(auto&& word:words)
        all[word]++;

    for(int i=0; i<p; i++)
    {
        unordered_map<string,int> temp;
        int count=0;
        int start=i;
        for(int j=start; j<=m-p; j+=p)
        {
            string str=s.substr(j,p);
            if(all[str])
            {
                temp[str]++;
                if(temp[str]<=all[str])
                    count++;
                else {
                    while(temp[str]>all[str])
                    {
                        string repeat=s.substr(start,p);
                        temp[repeat]--;
                        if(temp[repeat]<all[repeat])
                            count--;
                        start+=p;
                    }
                }
                if(count==n)
                {
                    answer.push_back(start);
                    temp[s.substr(start,p)]--;
                    count--;
                    start+=p;
                }
            }
            else
            {
                temp.clear();
                count=0;
                start=j+p;
            }
        }
    }
    return answer;
}
};
