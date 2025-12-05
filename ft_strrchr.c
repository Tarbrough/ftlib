#include "libft.h"

char *ft_strrchr(const char *src, int c){
    int count;
    const char *temp = src;
    count = sizeof(src);

    while (count >= 0){
        if(*temp == c){
            return ((char *)src);
        }
        count--;
    }
    return (0);
}