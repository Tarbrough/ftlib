void *ft_memmove(void *dest, const void *src, int size){
    char *cdest;
    char *csrc;
    int count;

    cdest = dest;
    csrc = src;

    if (!dest && !src){
        return (0);
    }

    if (dest <= src){
        while(size--){
            *cdest++ = *csrc++;
        }
    } else if (dest > src){
        cdest = cdest + (size - 1);
        csrc = csrc + (size - 1);
        while (size--){
            *cdest-- = *csrc--;
        }

    }
    return (dest);
}