*     int end;
*      *     Interval() : start(0), end(0) {}
*       *     Interval(int s, int e) : start(s), end(e) {}
*        *
};
*         */
class Solution {
public:
    static bool comp(Interval& i,Interval& j)
    {
        return i.start<j.start;
    }
    vector<Interval> merge(vector<Interval>& intervals) {
        if(intervals.size()<2)
            return intervals;
        vector<Interval> answer;
        sort(intervals.begin(),intervals.end(),comp);
        answer.push_back(move(intervals.front()));
        for(auto&& interval:intervals)
        {

            if(answer.back().end>=interval.start)
                answer.back().end=max(answer.back().end,interval.end);
            else
                answer.push_back(move(interval));
        }
        return answer;
    }
};
