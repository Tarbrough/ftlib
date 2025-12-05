#include "libft.h"

void *ft_memset(void *s, int c, size_t n){
    unsigned char *csrc;

    csrc = (unsigned char*)s;
    while (n > 0){
        //Test to see if this can replace a count in all code.
        *(csrc++) = c;
        n--;
    }
    return(s);
}