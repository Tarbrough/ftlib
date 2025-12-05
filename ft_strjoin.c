#include "libft.h"

char *ft_strjoin(char const *s1, char const *s2){

    char* str;
    size_t i = 0;
    size_t j = 0;

    str = (char *) malloc((ft_strlen(s1)+ ft_strlen(s2) + 1) * sizeof(char));
    if (!str)
        return (NULL);

    while(s1[i]){
        str[j++] = s1[i++];
    }

    i = 0;
    while (s2[i]){
        str[j++] = s2[i++];

    }

    str[j] = 0;
    return(str);
}
