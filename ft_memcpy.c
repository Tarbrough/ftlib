#include "libft.h"

void *ft_memcpy (void *dest, const void *src, size_t n){
    size_t count;
    size_t size = n;
    count = 0;
    unsigned char *cdest = dest;
    const unsigned char *csrc = (const unsigned char*)src;
    if(!dest && !src)
        return(NULL);

    while(count < size){
        cdest[count] = csrc[count];
        count++;
    }

    return (dest);
}