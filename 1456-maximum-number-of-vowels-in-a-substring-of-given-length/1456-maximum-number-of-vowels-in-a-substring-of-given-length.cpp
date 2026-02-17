class Solution {
public:
    int maxVowels(string s, int k) {
        bool isVowel[26] = {0};
        isVowel['a' - 'a'] = true;
        isVowel['e' - 'a'] = true;
        isVowel['i' - 'a'] = true;
        isVowel['o' - 'a'] = true;
        isVowel['u' - 'a'] = true;

        int l = 0, curr = 0, res = 0;

        for (int r = 0; r < s.size(); r++) {
            if (isVowel[s[r] - 'a']) curr++;

            if (r - l + 1 > k) {
                if (isVowel[s[l] - 'a']) curr--;
                l++;
            }

            res = max(res, curr);
        }

        return res;
    }
};