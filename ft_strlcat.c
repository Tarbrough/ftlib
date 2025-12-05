#include "libft.h"

int ft_strlcat( char *dest, const char *src, size_t size){

    size_t dest_size = ft_strlen(dest);
    size_t src_size = ft_strlen(src);

    if(!src) {
        return (0);
    }

    if (dest_size >= size)
        dest_size = size;

    if (dest_size == size)
        return(dest_size + src_size);

    if (src_size < size - dest_size){
        ft_memcpy(dest + dest_size, src, src_size + 1);
    } else {
        ft_memcpy(dest + dest_size, src, size - dest_size - 1);
        dest[size - 1] = '\0';
    }

    return(dest_size + src_size);
}