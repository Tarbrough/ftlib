int strncmp(const char *s1, const char *s2){
    int output;
    int count;

    output = 0;
    count = 0;
    while (s1[count] != '\0' && s2[count] != '\0'){
        output =+ s1[count] - s2[count];
        count++;
    }
    return (output);
}