class Solution {
public:
    string multiply(string num1, string num2) {
        int n=num1.length();
        int m=num2.length();
        if(num1=="0" || num2 == "0")
            return "0";
        string answer;
        int sum=0;
        for(int k=n+m-2; k>=0; k--)
        {
            for(int i=n-1; i>=0; i--)
            {
                int j=k-i;
                if(j>=0 && j<m)
                    sum+=(num1[i]-'0')*(num2[j]-'0');
            }
            answer.insert(0,1,'0'+sum%10);
            sum/=10;
        }
        while(sum)
        {
            answer.insert(0,1,'0'+sum%10);
            sum/=10;
        }
        return answer;
    }
};
