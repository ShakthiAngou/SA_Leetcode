// create maps for t and s that will keep track of each letter pair
// if the maps dont show mappings of the same pair, then you know something was overwritten
bool isIsomorphic(char * s, char * t){
    char * s_map = (char *)calloc(128, sizeof(char));
    char * t_map = (char *)calloc(128, sizeof(char));
    int lenS = strlen(s);
    int lenT = strlen(t);
    if (lenS != lenT) return false;
    for (int i = 0; i < strlen(s); i ++){
        if(s_map[s[i]] == 0 && t_map[t[i]] == 0){
            s_map[s[i]] = t[i];
            t_map[t[i]] = s[i];
        }
        else if (s_map[s[i]] != t[i] || t_map[t[i]]!= s[i]) return false;
    }
    free(s_map);
    free(t_map);
    return true;
}
