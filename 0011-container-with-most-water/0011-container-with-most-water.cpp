class Solution {
public:
    int maxArea(vector<int>& height) {
        int maxWater = 0;
        int left = 0;
        int right = height.size()-1;
        int width =0;
        int ht=0;
        int area = 0;
        
        while(left < right){
            width = right - left;
            ht = min(height[left], height[right]);
            area = width * ht;
            maxWater = max(maxWater, area);

            height[left] < height[right] ? left ++ : right--;
        }
        return maxWater;
    }
};