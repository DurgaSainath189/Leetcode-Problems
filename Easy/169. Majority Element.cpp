class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int c=0;
        int element;
        for(int i=0;i<nums.size();i++){
            if(c==0){
                element=nums[i];
                c=1;
            }
            else if(nums[i]==element){
                c++;
            }
            else{
                c--;
            }
        }
        return element;
    }
};