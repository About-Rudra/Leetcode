class Solution {
public:

    bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
           c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U';
            }   


    string reverseVowels(string s) {
        string copy = s;
        int n = s.size()-1;
       

        int front = 0;

        while(front<n){
            while(front < n && !isVowel(s[n])){
                n--;
            }
             while( front < n && !isVowel(copy[front]) ){
                front++;
            }

            if(isVowel(s[n]) &&  isVowel(copy[front])){
               char temp = copy[front];
                copy[front] = s[n];
                copy[n] = temp;
                front++;
                n--;
            }

        }

    return copy;
        
    }
};