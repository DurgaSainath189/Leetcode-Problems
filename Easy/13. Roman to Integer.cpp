class Solution {
public:
    int romanToInt(string s) {
        int result = 0;
        int sum = 0;
        for (int i = s.length()-1; i>=0; i--) {
            char letter = s[i];
            if (letter == 'I') result = 1;
            if (letter == 'V') result = 5;
            if (letter == 'X') result = 10;
            if (letter == 'L') result = 50;
            if (letter == 'C') result = 100;
            if (letter == 'D') result = 500;
            if (letter == 'M') result = 1000;
            if(4*result<sum){
                sum=sum-result;
            }
            else{
                sum+=result;
            }
        }
        return sum;
    }
};