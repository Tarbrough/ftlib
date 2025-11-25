#include "libft.h"

char *strchr(const char *src, int c){
    int count;
    count = 0;

    while (count <= sizeof(src)){
        if(*src == c){
            return (src);
        }
        count++;
    }
    return (0);
}