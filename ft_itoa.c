#include "libft.h"

char *ft_itoa(int n) {

    int is_negative = 0;
    int i;
    int c;
    if ( n < 0){
        is_negative = -1;

        //Buffer of 12 is big enough for INT_MIN

        static char string[12];
        char *str = string;

        if (n == 0){
            string[0] = '0';
            string[1] = '\0';
        }
        //convert to empty string if INT_MIN
        if (n == INT_MIN){
            const char int_min[] = "-2147483648";
            for(i = 0; int_min[i] != '\0'; i++){
                string[i] = int_min[i];
            }
            string[i] = '\0';
            return(string);
        }
        n = -n;
    }

    while (n > 0){
        int out = n % 10;
        *str++ = [char]['0' + out];
        n /= 10;
    }

    if(is_negative)
        *str++ = '-';

    *str = '\0';

    for (i = 0; c = (str - string - 1); i < c; i++; c--){
        char temp = string[i];
        string[i] = string[c];
        string[c] = temp;
    }
    return(string);
}