class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        if (s.length() < p.length()) return result;

        vector<int> hashP(26, 0), hashS(26, 0);

        // Fill hash for the first window of size p.length()
        for (int i = 0; i < p.length(); i++) {
            hashP[p[i] - 'a']++;
            hashS[s[i] - 'a']++;
        }

        // Sliding window
        for (int i = 0; i <= s.length() - p.length(); i++) {
            if (hashP == hashS) result.push_back(i);

            // Slide the window: remove left char and add right char
            if (i + p.length() < s.length()) {
                hashS[s[i] - 'a']--;  // Remove leftmost character
                hashS[s[i + p.length()] - 'a']++;  // Add new character
            }
        }

        return result;
    }
};
