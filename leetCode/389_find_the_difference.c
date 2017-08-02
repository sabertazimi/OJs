char findTheDifference(char* s, char* t) {
    char r = 0;
    
    for (int i = 0; i < strlen(s); ++i) {
        r ^= s[i];
    }

    for (int i = 0; i < strlen(t); ++i) {
        r ^= t[i];
    }
    
    return r;
}
