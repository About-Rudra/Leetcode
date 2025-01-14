
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        if (n == 0) return 0;

        int maxLength = 0;  // To store the maximum length
        int start = 0;      // First pointer
        int count = 0;      // Counter to track the current window size

        for (int end = 0; end < n; end++) {
            // Check if the character in the current window repeats
            for (int k = start; k < end; k++) {
                if (s[k] == s[end]) {
                    start = k + 1;  // Move the start pointer after the repeated character
                    break;
                }
            }

            // Update the current window size
            count = end - start + 1;

            // Update the maximum length
            maxLength = max(maxLength, count);
        }

        return maxLength;
    }
};
