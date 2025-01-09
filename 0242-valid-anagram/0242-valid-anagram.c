bool isAnagram(char* s, char* t) {
    int m=strlen(t);
    int n=strlen(s);
    if(m!=n){
        return false;
    }
    int count1[26]={0}, count2[26] ={0};
    for(int i=0; s[i]!='\0';i++){
       count1[s[i]-'a']++;
       count2[t[i]-'a']++;
    }
    for(int i=0;i<26;i++){
        if(count1[i]!=count2[i]){
            return false;
        }
    }
    return true;
}