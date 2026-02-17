class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int vowelCount = 0;
        int maxVowels = 0;
        
       
        auto isVowel = [](char c) {
            return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
        };
        
        
        for(int i = 0; i < k; i++) {
            if(isVowel(s[i])) {
                vowelCount++;
            }
        }
        
        
        maxVowels = vowelCount;
        
        // Step 3: Slide the window
        for(int i = k; i < n; i++) {
            // Remove leftmost character from window
            if(isVowel(s[i - k])) {
                vowelCount--;
            }
            
            // Add new character to window
            if(isVowel(s[i])) {
                vowelCount++;
            }
            
            // Update maximum
            maxVowels = max(maxVowels, vowelCount);
            
            
        }
        
        return maxVowels;
    }
};