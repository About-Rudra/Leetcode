class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // If str1 + str2 != str2 + str1, no common divisor exists other than ""
        if (str1 + str2 != str2 + str1) {
            return "";
        }
        
        // Find the GCD of the lengths
        int len1 = str1.length();
        int len2 = str2.length();
        
        // Euclidean algorithm to compute GCD of lengths
        while (len2 != 0) {
            int temp = len2;
            len2 = len1 % len2;
            len1 = temp;
        }
        
        // len1 now holds gcd(len1, len2)
        // The GCD string is the prefix of str1 (or str2) of that length
        return str1.substr(0, len1);
    }
};