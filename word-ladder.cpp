class Solution {
public:
    int ladderLength(string beginWord, string endWord, vector<string>& wordList) {
        unordered_set<string> words(make_move_iterator(wordList.begin()),make_move_iterator(wordList.end()));
         if(words.find(endWord)==words.end())
             return 0;
         if(beginWord==endWord)
             return 1;
        int answer=1;
        unordered_set<string> all={beginWord};
        while(all.size()){
            answer++;
            unordered_set<string> next_set;
            for(auto s: all)
                words.erase(s);
            for(auto s: all){
                for(int i=0;i<s.size();i++){
                    auto temp=s;
                    for(char c='a';c<='z';c++){
                        temp[i]=c;
                        if(words.find(temp)!=words.end())
                            next_set.insert(temp);
                        if(temp==endWord)
                            return answer;
                    }
                }
            }
            all=next_set;
        }
        return 0;
    }
};
