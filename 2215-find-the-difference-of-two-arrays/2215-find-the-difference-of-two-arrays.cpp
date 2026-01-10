class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> ans(2); 
        
        // Use sets for uniqueness and fast lookup
        unordered_set<int> set1(nums1.begin(), nums1.end());
        unordered_set<int> set2(nums2.begin(), nums2.end());

        // Difference: elements in nums1 but NOT in nums2
        for (int num : set1) {
            if (set2.find(num) == set2.end()) {
                ans[0].push_back(num);
            }
        }

        // Difference: elements in nums2 but NOT in nums1
        for (int num : set2) {
            if (set1.find(num) == set1.end()) {
                ans[1].push_back(num);
            }
        }

        return ans;
    }
};