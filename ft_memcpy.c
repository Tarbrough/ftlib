#include "libft.h"

void *ft_memcpy (void *dest, const void *src, int size){
    int count;
    count = 1;
    cdest = dest;
    csrc = src;
    while(count <= size){
        cdest[count] = csrc[count];
        count++;
    }

    return (dest);
}