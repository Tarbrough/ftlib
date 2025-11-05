char *strrchr(const char *src, int c){
    int count;
    count = sizeof(src);

    while (count >= 0){
        if(*src == c){
            return (src);
        }
        count--;
    }
    return (0);
}