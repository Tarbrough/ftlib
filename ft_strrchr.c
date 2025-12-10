#include "libft.h"

char *ft_strrchr(const char *src, int c){
    const char *out;
    unsigned char ch = (unsigned char)c;

    out = '\0';
    while(*src){
        if((unsigned char)*src == ch){
            out = src;
        }
        src++;
    }

    if (ch == '\0')
        return((char *)src);
    return((char *)out);
}