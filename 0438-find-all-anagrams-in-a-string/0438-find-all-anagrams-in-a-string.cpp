class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> result;
        int n = s.length(), m = p.length();
        
        if (n < m) return result; // If s is smaller than p, no anagram is possible
        
        vector<int> pCount(26, 0), sCount(26, 0);
        
        // Count frequency of characters in p and first window of s
        for (int i = 0; i < m; i++) {
            pCount[p[i] - 'a']++;  
            sCount[s[i] - 'a']++;
        }
        
        // Check if first window is an anagram
        if (pCount == sCount) result.push_back(0);
        
        // Start sliding the window
        for (int i = m; i < n; i++) {
            sCount[s[i] - 'a']++;    // Add new character from right
            sCount[s[i - m] - 'a']--; // Remove old character from left
            
            if (pCount == sCount) result.push_back(i - m + 1);
        }
        
        return result;
    }
};
