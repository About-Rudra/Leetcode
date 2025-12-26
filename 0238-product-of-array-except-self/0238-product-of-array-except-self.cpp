

// this is bruteforce solution, this gives TLE

// class Solution {
// public:
//     vector<int> productExceptSelf(vector<int>& nums) {
//         int len = nums.size();
//         vector<int> ans(len, 1); // Initialize result array with 1s

//         // First pass: Calculate left products
//         int leftProduct = 1;
//         for (int i = 0; i < len; ++i) {
//             ans[i] = leftProduct; // Store the product of all elements to the left of nums[i]
//             leftProduct *= nums[i]; // Update leftProduct for the next iteration
//         }

       
//         int rightProduct = 1;
//         for (int i = len - 1; i >= 0; --i) {
//             ans[i] *= rightProduct; 
//             rightProduct *= nums[i]; 
//         }

//         return ans;
//     }
// };


class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int len = nums.size();
        vector<int> ans(len, 1);

        int leftProduct = 1;
        for (int i = 0; i < len; ++i) {
            ans[i] = leftProduct;
            leftProduct *= nums[i];
        }

        int rightProduct = 1;
        for (int i = len - 1; i >= 0; --i) {
            ans[i] *= rightProduct;
            rightProduct *= nums[i];
        }

        return ans;
    }
};