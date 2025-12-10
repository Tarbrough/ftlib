#include "libft.h"

char *ft_strmapi (const char *string, char (*function)(unsigned int, char)){

    unsigned int i;
    char *result;

    i= 0;
    result = malloc((ft_strlen(string) + 1) * sizeof(char));
    if (!result)
        return (NULL);

    while (i < ft_strlen(string)){
        result[i] = (*function)(i, string[i]);
        i++;
    }
    result[i] = 0;
    return(result);
}