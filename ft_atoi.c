#include "libft.h"

int ft_char_forbidden(int i);

int ft_atoi(const char *src){
    int output;
    int i;

    output = 0;
    int negpos = 1;
    i = 0;

    while (ft_char_forbidden(src[i]))
        i++;

    if (src[i] == '+' && src[i + 1] != '-')
        i++;

    if (src[i] == '-'){
        negpos = -1;
        i++;
    }

    while (src[i] && src[i] >= 48 && src[i] <= 57){
        output *= 10;
        output += src[i] -48;
        i++;
    }
    output *= negpos;
    return (output);

}

int ft_char_forbidden(int i){
    if (i >= 9 && i <= 13){
        return(1);
    } else if (i == 32){
        return(1);
    }
    return (0);
}