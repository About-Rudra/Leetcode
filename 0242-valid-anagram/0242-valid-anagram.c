bool isAnagram(char* s, char* t) {
    int map[128] = {0};
    int i;

    if (strlen(s) != strlen(t)) {
        return false;
    }

    for(i=0;s[i]!='\0';i++){
        map[s[i]-97]+=1;
    }

    for(i=0;t[i]!='\0';i++){
        map[t[i]-97]-=1;

        if( map[t[i]-97]<0){
            return false;
        }
       
    }
    return true;
}