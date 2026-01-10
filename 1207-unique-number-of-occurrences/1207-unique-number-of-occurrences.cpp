class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        unordered_map<int, int> mp;

        for(auto& i : arr){
            mp[i]++;
        }

        unordered_set<int> freq;
        for(auto& i : mp){
            int count = i.second;

            if(freq.count(count))return false;

            freq.insert(count);
        }
        return true;
    }
};