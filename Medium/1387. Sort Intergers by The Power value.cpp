class Solution {
public:
int cal_power(int num){
        int count = 0 ;
        while(num != 1){
            if(num % 2 == 0){
                num/= 2 ;
                count++ ;
            }
            else{
                num = 3*num+1 ;
                count++ ;
            }
        }
        return count ;
    }
    int getKth(int lo, int hi, int k) {
        vector<vector<int>> power;
        for(int i=lo;i<=hi;i++){
            int val=cal_power(i);
            vector<int> res={val,i};
            power.push_back(res);
        }
        sort(power.begin(),power.end());
        return power[k-1][1];
    }
};