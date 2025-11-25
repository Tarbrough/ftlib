#include "libft.h"

static int len(long i);

char *ft_itoa(int n){
    char *out;
    size_t length;
    unsigned int i;
    size_t length_sec;

    length = len(n);
    out = (char *) malloc(sizeof(char) * (length + 1));
    if (!out)
        return(NULL);

    out[length] = '\0';
    i = (n < 0) ? -n : n;
    length_sec = length - 1;
    if (n == 0)
        out[0] = '0';
    else {
        while(i > 0){
            out[length_sec] = (i % 10) + '0';
            i /= 10;
            length_sec--;
        }
        if (n < 0)
            str[0] = '-';
    }
    return(out);
}

static int len(long i){
    if (n == INT_MIN)
        return(11);
    size_t length;

    length = (n == 0) ? 1 : 0;
    if (n < 0){
        len ++;
        n = -n;
    } else if (n > 0) {
        while(n > 0){
            len++;
            n /= 10;
        }
    }
    return length;
}