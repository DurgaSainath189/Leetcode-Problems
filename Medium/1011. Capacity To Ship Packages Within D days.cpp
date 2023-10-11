class Solution {
public:
    bool no_of_days(vector<int>& weights,int mid,int days){
        int no_days=1,load=0;
        for(int i=0;i<weights.size();i++){
            if(load+weights[i]>mid){
                no_days++;
                load=weights[i];
            }
            else{
                load+=weights[i];
            }
        }
        return no_days<=days;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int ma=INT_MIN;
        for(int i=0;i<weights.size();i++){
            ma=max(ma,weights[i]);
        }
        int sum=0;
        for(int i=0;i<weights.size();i++){
            sum+=weights[i];
        }
        int low=ma;
        int high=sum;
        while(low<=high){
            int mid=(low+high)/2;
            if(no_of_days(weights,mid,days)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};