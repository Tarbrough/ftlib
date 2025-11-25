#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){

    size_t s1_size;
    size_t s2_size;
    size_t len;
    char *out;

    if (!s1 || !s2)
        return (NULL);

    s1_size = ft_strlen(s1);
    s2_size = ft_strlen(s2);

    if (s1_size > SIZE_MAX - s2_size -1)
        return (NULL);

    len = s1_size + s2_size;
    out = (char *) malloc(sizeof(char) * (len + 1));
    if (!out)
        return(NULL);

    ft_memcpy(out, s1, s1_size);
    ft_memcpy(out + s1_size, s2, s2_size);
    out[len] = '\0';
    return(out);

}
