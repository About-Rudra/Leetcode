class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        int start = 0;

        for (int i = 0; i <= n; i++) {
            if (i == n || s[i] == ' ') { // If space or end of string
                reverse(s.begin() + start, s.begin() + i);
                start = i + 1; // Move to the next word
            }
        }
        return s;
    }
};
