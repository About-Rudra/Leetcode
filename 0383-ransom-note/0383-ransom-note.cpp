class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char, int> ransom;
        unordered_map<char, int> mag;

        for(char ch : ransomNote){
            ransom[ch]++;
        }

        for(char ch : magazine){
            mag[ch]++;
        }

        for(auto it = ransom.begin(); it != ransom.end(); it++) {
    char ch = it->first;
    int count = it->second;
    if(mag[ch] < count) return false;
}
return true;

        
    }
};