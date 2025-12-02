#include "libft.h"

void *memchr(const void *src, int c, int size){
    char *csrc = src;

    while (int count = 0; count < size; count++){
        if (csrc[count] == (unsigned char)c){
            return(csrc[count]);
        }
    }
    return (NULL);
}