class Solution {
public:
    bool check(vector<int> &nums,int mid,int threshold){
        int s=0;
        for(int i=0;i<nums.size();i++){
            s+=ceil((double)nums[i]/(double)mid);
            if(s>threshold) return false;
        }
        return true;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int ma=INT_MIN;
        for(int i=0;i<nums.size();i++){
            ma=max(ma,nums[i]);
        }
        int low=1;
        int high=ma;
        while(low<=high){
            int mid=(low+high)/2;
            if(check(nums,mid,threshold)) high=mid-1;
            else low=mid+1;
        }
        return low;
    }
};