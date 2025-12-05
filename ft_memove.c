#include "libft.h"

void *ft_memmove(void *dest, const void *src, size_t n){
    char *cdest;
    char *csrc;
    size_t size = 0;


    cdest = (char*)dest;
    csrc = (char*)src;

    if (!dest && !src){
        return (NULL);
    }

    if (cdest > csrc){
        while(n > 0){
            cdest[n] = csrc[n];
            n--;
        }
    } else {
        while(size < n){
            cdest[size] = csrc[size];
            size++;
        }
    }
    return (dest);
}