class Solution {
public:
   bool isPalindrome(int x) {
    // Negative numbers are not palindromes
    // Also, numbers that end with 0 (except for 0 itself) are not palindromes
    if (x < 0 || (x % 10 == 0 && x != 0)) {
        return false;
    }

    string str = to_string(x); // Convert the integer to a string
    int left = 0;               // Initialize left pointer
    int right = str.length() - 1; // Initialize right pointer

    while (left < right) {
        // Compare characters at left and right pointers
        if (str[left] != str[right]) {
            return false; // Not a palindrome
        }
        left++; // Move the left pointer to the right
        right--; // Move the right pointer to the left
    }

    return true; // The number is a palindrome
}
};