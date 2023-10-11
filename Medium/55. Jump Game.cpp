class Solution {
public:
    bool canJump(vector<int>& nums) {
        int size=nums.size();
        int res=0;
        for(int i=0;i<size;i++){
            if(i>res) return 0;
            res=max(res,i+nums[i]);
        }
        return 1;
    }
};