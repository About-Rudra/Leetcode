// class Solution {
// public:
//     int majorityElement(vector<int>& nums) {
//         unordered_map<int, int> count;
//        for(int i = 0; i<nums.size(); i++){
//         count[nums[i]] ++;

//         if(count[nums[i]] > nums.size()/2){
//             return nums[i];
//         }
//        }
//         return -1;
//     }
// };

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int, int> mp;

        for(auto it : nums){
            mp[it]++;
        }

        for(auto i : mp){
            if(i.second > nums.size()/2) return i.first;
        }
        return -1;
    }
};