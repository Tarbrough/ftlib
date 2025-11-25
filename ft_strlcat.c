#include "libft.h"

int ft_strlcat( char *dest, char *src, int size){
    int count;
    int limit;


    if(!src) {return (0);}

    count = 0;
    limit = sizeof(dest);
    while (count < (sizeof(src))){
        dest[limit + count] = src[count];
        count++;
    }
    dest[limit + count] = '\0';
    return(sizeof(dest) + sizeof(src));
}