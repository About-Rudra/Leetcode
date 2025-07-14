class Solution {
public:
    bool isSubsequence(string s, string t) {
        int sub =0;
        int count = 0;
        for(int i =0; i<t.length(); i++){
            if(s[sub] == t[i]){
                sub ++;
                count ++;
            }
        }

        if(count==s.length()){
            return true;
        }else{
            return false;
        }
        
    }
};