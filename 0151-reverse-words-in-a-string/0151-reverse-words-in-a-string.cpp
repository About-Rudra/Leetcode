class Solution {
public:
    string reverseWords(string s) {
        // Step 1: Reverse the entire string
        reverse(s.begin(), s.end());

        int n = s.size();
        int idx = 0;  // write pointer for clean result

        for (int start = 0; start < n; ) {
            // Skip leading spaces
            while (start < n && s[start] == ' ') {
                start++;
            }
            if (start == n) break;

            // Find end of current word
            int end = start;
            while (end < n && s[end] != ' ') {
                end++;
            }

            // Reverse the word to make it correct
            reverse(s.begin() + start, s.begin() + end);

            // Add a space before the word if it's not the first word
            if (idx > 0) {
                s[idx++] = ' ';
            }

            // Copy the reversed word to the clean position
            for (int i = start; i < end; i++) {
                s[idx++] = s[i];
            }

            // Move to next potential word
            start = end;
        }

        // Trim the string to the correct length (removes junk at the end)
        s.resize(idx);

        return s;
    }
};