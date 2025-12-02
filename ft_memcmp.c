#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t len){

    const unsigned char *c1 = s1;
    const unsigned char *c2 = s2;

    while (int i= 0; i < len; i++) {
        if (c1[i] != c2[i]) {
            return(c1[i] - c2[i]);
        } else {
            return(0);
        }

    }
}