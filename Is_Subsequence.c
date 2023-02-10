bool isSubsequence(char * s, char * t){
    int s_len = strlen(s);
    int t_len = strlen(t);
    int start = 0;

    if (s_len > t_len) return false;
    
    for (int i = 0; i < s_len; i ++){
        for (int j = start; j < t_len; j ++){
            if (s[i] == t[j]) {
                s[i] = '0';
                t[j] = '1';
                start = j + 1;
            }
        }
    }
    for (int i = 0; i < s_len; i ++) {
        if (s[i] != '0') return false;
    }
    return true;
}
