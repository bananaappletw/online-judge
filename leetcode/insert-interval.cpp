/**
 *  * Definition for an interval.
 *   * struct Interval {
 *    *     int start;
 *     *     int end;
 *      *     Interval() : start(0), end(0) {}
 *       *     Interval(int s, int e) : start(s), end(e) {}
 *        * };
 *         */
class Solution {
public:
    vector<Interval> insert(vector<Interval>& intervals, Interval newInterval) {
        if(!intervals.size())
            return vector<Interval> {newInterval};
        vector<Interval> answer;
        bool first=true;
        for(auto interval:intervals)
        {
            if(interval.start<newInterval.start&&interval.end<newInterval.start)
                answer.push_back(move(interval));
            else if(interval.start>newInterval.end&&interval.end>newInterval.end)
            {
                if(first)
                    answer.push_back(move(newInterval));
                first=false;
                answer.push_back(move(interval));
            }
            else
            {
                newInterval.end=max(newInterval.end,interval.end);
                newInterval.start=min(newInterval.start,interval.start);
            }
        }
        if(first)
            answer.push_back(move(newInterval));
        return answer;
    }
};
