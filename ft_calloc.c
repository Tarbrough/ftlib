#include "libft.h"

void *ft_calloc(size_t count, size_t size)
{
    unsigned char *tmp;
    size_t i;


    if (count != 0 && size > INT_MAX / count)
        return (NULL);

    i = 0;
    /* allocating count * size bytes in memory with malloc */
    tmp = malloc(count * size);
    /* check if the memory was allocated */
    if (!tmp)
        return (NULL);
    /* loop over every allocated bytes and set it to 0 */
    while (i < count * size)
        tmp[i++] = 0;
    /* return the allocated memory */
    return (tmp);
}