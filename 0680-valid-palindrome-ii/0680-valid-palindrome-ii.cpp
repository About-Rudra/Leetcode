class Solution {
public:
    bool validPalindrome(string s) {
        int i = 0, j = s.length() - 1;

        while (i < j) {
            if (s[i] != s[j]) {
                // Check if skipping the left character makes the substring palindrome
                bool skipLeft = isPalindrome(s, i + 1, j);
                // Check if skipping the right character makes the substring palindrome
                bool skipRight = isPalindrome(s, i, j - 1);
                
                return skipLeft || skipRight; // Return true if either skip results in palindrome
            }
            i++;
            j--;
        }
        return true; // It's already a palindrome
    }

    bool isPalindrome(string &s, int left, int right) {
        while (left < right) {
            if (s[left] != s[right]) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
};
