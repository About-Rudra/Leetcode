class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        int length = indices.size();
        if(s.length()!=length) return "";
        string string1(length,' ');

        for(int i =0; i<length; i++){
            string1[indices[i]] = s[i];
        }
        return string1;
    }
};