#include "libft.h"

void ft_bzero(void *s, int n){
    char *src;

    src = (char *)s;

    while (n > 0){
        *(src++) = 0;
        n--;
    }
}