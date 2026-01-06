class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> group;

        for(string word : strs){
            string key = word; //eat
            sort(key.begin(), key.end());  //aet
            group[key].push_back(word);// groups will have: aet -> eat, tea, ate
        }

        vector<vector<string>> ans;
        for(auto& pair : group){
            ans.push_back(pair.second);
        }

        return ans;
        
    }
};