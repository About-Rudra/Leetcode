class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        
        vector<int> s1Count(26, 0);
        vector<int> windowCount(26, 0);
        
        // Count characters
        for(int i = 0; i < s1.length(); i++) {
            s1Count[s1[i] - 'a']++;
            windowCount[s2[i] - 'a']++;
        }
        
        // Check first window
        if(s1Count == windowCount) return true;
        
        // Slide window
        for(int i = s1.length(); i < s2.length(); i++) {
            windowCount[s2[i] - 'a']++;
            windowCount[s2[i - s1.length()] - 'a']--;
            
            if(s1Count == windowCount) return true;
        }
        
        return false;
    }
};