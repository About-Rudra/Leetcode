class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> lastSeen;
        int left = 0;
        int maxlen = 0;
        int n = s.size();

        for (int right = 0; right < n; right++) {
            char c = s[right];

            if (lastSeen.count(c) && lastSeen[c] >= left) {
                left = lastSeen[c] + 1;
            }

            lastSeen[c] = right;
            maxlen = max(maxlen, right - left + 1);
        }

        return maxlen;
    }
};