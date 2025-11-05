int ft_strlcpy( char *dest, char *src, int size){
    int count;

    if (!src){return (0);}

    count = 1;
    while (count <= size){
        dest[count - 1] = src[count - 1];
        dest[size] = '\0'; 
    }
    return (sizeof(src));
    
}