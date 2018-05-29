class Solution {
public:
    vector<string> fullJustify(vector<string>& words, int maxWidth) {
        queue<string> line;
        vector<string> answer;
        int N=words.size();
        int remain=maxWidth-words.front().length();
        line.push(words.front());
        for(int i=1; i<N; i++)
        {
            if(words[i].length()+1>remain)
            {
                string temp;
                temp+=line.front();
                line.pop();
                if(line.size())
                {
                    int per=remain/line.size();
                    remain=remain%line.size();
                    while(!line.empty())
                    {
                        temp+=string(1+per,' ');
                        if(remain)
                        {
                            remain--;
                            temp+=' ';
                        }
                        temp+=line.front();
                        line.pop();
                    }
                }
                else
                    temp+=string(remain,' ');
                line.push(words[i]);
                answer.push_back(temp);
                remain=maxWidth-words[i].length();
            }
            else
            {
                remain-=words[i].length()+1;
                line.push(words[i]);
            }
        }
        if(!line.empty())
        {
            string temp=line.front();
            line.pop();
            while(!line.empty())
            {
                temp+=' ';
                temp+=line.front();
                line.pop();
            }
            if(temp.length()<maxWidth)
                temp+=string(maxWidth-temp.length(),' ');
            answer.push_back(temp);
        }
        return answer;
    }
};
