class Solution {
public:
    void sortColors(vector<int>& nums) {
        int low = 0;           // Tracks the boundary of 0s
        int mid = 0;           // Current element being considered
        int high = nums.size() - 1;  // Tracks the boundary of 2s

        // Traverse the array
        while (mid <= high) {
            if (nums[mid] == 0) {
                swap(nums[low], nums[mid]);
                low++;
                mid++;
            }
            else if (nums[mid] == 1) {
                mid++; // Leave it, it's already in place
            }
            else { // nums[mid] == 2
                swap(nums[mid], nums[high]);
                high--;
                // DO NOT move mid here because swapped element might be 0 or 1
            }
        }
    }
};
