class Solution {
public:

    vector<string> split(string ss){
        vector<string> words;
        int n = ss.size();
        int i = 0;

        while(i<n){
            while(i<n && ss[i]== ' ') i++;

            if(i==n) break;

            string word = "";
            while(i<n && ss[i]!= ' '){
                word += ss[i];
                i++;
            }

            words.push_back(word);
        }
        return words;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<string, char> w_to_p;
        unordered_map<char, string> p_to_w;

        vector<string> words = split(s);

        if (pattern.size() != words.size()) return false;

        for(int i = 0; i<words.size(); i++){
            char c = pattern[i];
            string w = words[i];

            if (p_to_w.count(c)) {
                if (p_to_w[c] != w) return false;
            } else {
                p_to_w[c] = w;
            }

            if (w_to_p.count(w)) {
                if (w_to_p[w] != c) return false;
            } else {
                w_to_p[w] = c;
            }
        }

        return true;
        
    }
};