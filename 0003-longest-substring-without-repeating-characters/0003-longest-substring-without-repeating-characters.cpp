class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        vector<int> mp(128,0);
        int maxlen = 0, left = 0;

        for(int right = 0; right < s.size(); right++){
            mp[s[right]]++;

            while(mp[s[right]] > 1){
                mp[s[left]]--;
                left ++;
            }
            maxlen = max(maxlen, right - left +1);
        }

        return maxlen;

    }
};