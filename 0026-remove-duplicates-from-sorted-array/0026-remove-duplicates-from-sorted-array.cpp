class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Handle edge cases
        if (nums.size() == 0) return 0;
        if (nums.size() == 1) return 1;

        int slow = 0; // Position to write the next unique element
        for (int fast = 1; fast < nums.size(); fast++) {
            if (nums[fast] != nums[slow]) {
                slow++;
                nums[slow] = nums[fast];
            }
        }
        
        return slow + 1; // Length of array with unique elements
    }
};