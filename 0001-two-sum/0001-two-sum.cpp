class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> comp;  // value -> index
        vector<int> ans;

        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];

            // Check if complement already exists in map
            if (comp.find(complement) != comp.end()) {
                ans.push_back(comp[complement]); // index of complement
                ans.push_back(i);                // current index
                return ans;
            }

            // Store current number and its index
            comp[nums[i]] = i;
        }

        return ans; // If no solution found
    }
};
