#include "libft.h"

int word_count(char const *str, char delimiter);
void ft_free(char **str, int c);
char *append_word(char const*str, int start, int end);

char **ft_split(char const *s, char c) {

    char **word;
    size_t i = 0; //INDEX
    size_t start = 0;
    int j;
    int c_word;

    if (!s)
        return(NULL);
    c_word = word_count(s, c);
    word = ft_calloc(c_word + 1, sizeof(char *));

    if(!word)
        return(NULL);

    i = 0;
    j = 0;
    start = 0;

    while(s[i])
    {
        //word_start
        if(s[i] != c && (i == 0 || s[i+1]  == c)){
            start = i;
        }

        //word_end
        if(s[i] != c && (s[i + 1] == c || s[i + 1] == '\0')){
            word[j] = append_word(s, start, i + 1);
            if(!word[j]){
                ft_free(word, j);
                return(NULL);
            }
            j++;
        }
        i++;
    }
    word[j] = NULL;
    return (word);


}

//Check how many limiters we have, because limiter count = word count.
//Likely could be done in split, but hey.
int word_count(char const *str, char delimiter){
    int count = 0;
    int i = 0;

    while(*str){
        if (*str != delimiter && i == 0){
            i = 1;
            count++;
        } else if(*str == delimiter){
            i = 0;
        }
    }
    return (count);
}

void ft_free(char **str, int c){
    int i = 0;
    while (i < c){
        free(str[i]);
        i++;
    }
    free(str);
}

char *append_word(char const*str, int start, int end){
    char *word;
    int i = 0;

    word = malloc(((end - start) + 1) * sizeof(char));
    if(!word)
        return(NULL);

    while (start < end){
        word[i] = str[start];
        i++;
        start++;
    }
    //terminate string, MIGHT have to be '\0'
    word[i] = 0;
    return(word);
}