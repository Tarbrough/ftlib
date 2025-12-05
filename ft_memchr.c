#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n){
    unsigned char *csrc = (unsigned char*)src;
    unsigned int count = 0;
    unsigned char ch = (unsigned char)c;


    while ( count < n){
        if (csrc[count] == ch){
            return(&csrc[count]);
        }
        count++;
    }
    return (NULL);
}