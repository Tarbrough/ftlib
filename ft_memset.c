void ft_memset (void *s, int c, int size){
    int count;
    char *csrc;

    count = 0;
    csrc = s;
    while (count <= (size - 1)){
        csrc[count] = c;
        count++;
    }
    return (csrc);
}