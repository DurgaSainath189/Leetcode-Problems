class Solution {
public:
    int reverse(int x) {
        long long reverse=0;
        int flag=0;
        if(x<0){
            flag=1;
        }
        int y=abs(x);
        while(y>0){
            reverse=reverse*10+y%10;
            y/=10;
        }
        if(reverse<pow(2,31)-1){
            if(flag==0)
                return reverse;
            return -reverse;
        }
        return 0;
    }
};