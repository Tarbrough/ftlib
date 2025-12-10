#include "libft.h"

int ft_toupper(int c){
    unsigned int out;
    if(c >= 97 && c <= 122){
        out = c - 32;
        return (out);
    } else {
       return (c);
    }
}

