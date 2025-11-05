void *memchr(const void *src, int c, int size){
    int count;
    char *csrc;

    csrc = src;
    count = 0;
    while (count < size){
        if (*csrc == c){
            return(csrc);
        }
    }
    return (0);
}