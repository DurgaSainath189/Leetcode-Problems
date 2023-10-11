class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int start=1,end=1,maxi=INT_MIN;
        for(int i=0;i<nums.size();i++){
            if(start==0){start=1;}
            if(end==0){end=1;}
            start*=nums[i];
            end*=nums[nums.size()-1-i];
            maxi=max(maxi,max(start,end));
        }
        return maxi;
    }
};