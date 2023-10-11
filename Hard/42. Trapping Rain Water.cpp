class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1;
        int water_trapped = 0;
        int maxLeft = 0, maxRight = 0;
        while (left <= right) {
            if (height[left] <= height[right]) 
            {
                if (height[left] >= maxLeft) 
                    maxLeft = height[left];
                else 
                    water_trapped += maxLeft - height[left];
                left++;
            } 
            else 
            {
                if (height[right] >= maxRight)
                    maxRight = height[right];
                else
                    water_trapped += maxRight - height[right];
                right--;
            }
        }
        return water_trapped;
        }
};