class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string result = "";
       
        int maxLen = max(word1.length(), word2.length());
         for (int k = 0; k < maxLen; k++) {
            if (k < word1.length()) result += word1[k];
            if (k < word2.length()) result += word2[k];
        }

        return result;
        
    }
};