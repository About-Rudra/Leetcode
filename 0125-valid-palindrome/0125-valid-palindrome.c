bool isPalindrome(char* s) {
    char Comp[100000];  // Large enough array to hold filtered characters
    int k = 0;

    // Step 1: Filter characters and convert to lowercase
    for (int i = 0; s[i] != '\0'; i++) {
        if ((s[i] >= 'A' && s[i] <= 'Z') || (s[i] >= 'a' && s[i] <= 'z') || (s[i] >= '0' && s[i] <= '9')) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                Comp[k++] = s[i] + 32; // Convert uppercase to lowercase
            } else {
                Comp[k++] = s[i];
            }
        }
    }
    Comp[k] = '\0';  // Null-terminate the filtered string

    // Step 2: Check palindrome using two-pointer approach
    int i = 0, j = k - 1;
    while (i < j) {
        if (Comp[i] != Comp[j]) {
            return false; // Not a palindrome
        }
        i++;
        j--;
    }

    return true; // Is a palindrome
}
