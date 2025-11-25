#include "libft.h"

int ft_strlen (char *c){
    int count;

    count = 0;
    while (c[count] != '\0'){
        count++;
    }
    return (count);
}