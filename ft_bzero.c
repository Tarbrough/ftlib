void ft_bzero(void *s, int size){
    int count;
    char *csrc;

    count = 1;
    csrc = (char *)s;
    while( count <= size){
        csrc[count] = '\0';
        count++;
    }
    s = csrc;
}