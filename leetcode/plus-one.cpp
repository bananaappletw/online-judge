class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int sum=1;
        for(auto it=digits.rbegin(); it!=digits.rend(); it++)
        {
            sum+=*it;
            if(sum<10)
            {
                *it=sum;
                sum=0;
                break;
            }
            else
            {
                *it=sum%10;
                sum/=10;
            }
        }
        if(sum)
            digits.insert(digits.begin(),sum);
        return digits;
    }
};
