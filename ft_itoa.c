#include "libft.h"

static int check_length(int nbr);
static char *mem(int len);


char *ft_itoa(int n) {

    int len;
    int i;
    int nbr = n;
    char *output;

    len = check_length(nbr);
    output = mem(len);
    i = len - 1;

    if (!output)
        return (NULL);

    if (nbr < 0){
        nbr *= -1;
    }

    while (nbr != 0){
        output[i] = ((nbr % 10) + 48);
        nbr = nbr / 10;
        i--;
    }

    if (n < 0){
        output[0] = '-';
    }

    output[len] = 0;
    return(output);
}

static int check_length(int nbr){
    int count = 0;

    if (nbr < 0){
        count++;
        nbr = -nbr;
    } else if (nbr == 0){
        count ++;
    }

    while (nbr != 0){
        nbr /= 10;
        count++;
    }
    return (count);
}

static char *mem(int len){
    char *temp;
    //assign memory to one more char than needed
    temp = malloc((len + 1) * sizeof(char));

    //Check if Malloc successfull (do I need this?)
    if(!temp){
        return(NULL);
    }

    //Make sure there is atleast one working character in ITOA. Could also be a check in itoa itself.
    temp[0] = '0';
    return(temp);
}