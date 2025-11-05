int ft_memcmp(const void *s1, const void *s2){
    int count;
    int output;
    char *cs1;
    char *cs2;

    output = 0;
    cs1 = s1;
    cs2 = s2;
    
    if (!s1 && !s2){
        return (0);
    }

    if (sizeof(cs1) >= sizeof(cs2)){
        count = sizeof(cs1);
    } else {
        count = sizeof(cs2);
    }

    while (count >= 0){
        output += cs1[count] - cs2[count];
    }
    return (output);
}