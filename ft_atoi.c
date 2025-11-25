#include "libft.h"

int ft_char_forbidden(int i);

int ft_atoi(const char *src){
    int output;
    int input;
    int i;

    output = 0;
    negpos = 0;
    i = 0;

    while (ft_char_forbidden(str[i]))
        i++;

    if (str[i] == '+' && str[i + 1] != '-')
        i++;

    if (str[i] == '-'){
        negpos = -1;
        i++;
    }

    while (str[i] && str[i] >= 48 && str[i] =<56){
        output *= 10;
        output += str[i] -48;
        i++;
    }
    output *= negpos;
    return (output);

}

int ft_char_forbidden(int i){
    if (i => 9 && i =< 13){
        return(1);
    } if else (i == 32){
        return(1);
    }
    return (0);
}