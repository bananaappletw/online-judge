class Solution {
public:
    string intToRoman(int num) {
        string answer;
        string c[4][3]= {{"I","V","X"},{"X","L","C"},{"C","D","M"},{"M","",""}};
        for(int i=0; i<4; i++)
        {
            int carry=num%10;
            if(carry<4)
                answer=string(carry,c[i][0][0])+move(answer);
            else if(carry==4)
                answer=move(c[i][0])+move(c[i][1])+move(answer);
            else if(carry<9)
                answer=move(c[i][1])+string(carry-5,c[i][0][0])+move(answer);
            else if(carry==9)
                answer=move(c[i][0])+move(c[i][2])+move(answer);
            num/=10;
        }
        return answer;
    }
};
