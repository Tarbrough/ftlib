

char *ft_strnstr(const char *src, const char *query, int len){
    int count;
    int query_len;
    int query_c;


    if (src[0] == '\0'){
        return (query);
    }

    count = 0;
    query_len = sizeof(query);
    while (count < sizeof(src)){
        if (src[count] == query[0]){
            
            
            query_c = 0;
            while (query_c <= query_len-1)
            {
                if(src[query_c] + count == query[query_c]){
                    if(query_c == query_len){
                        return(char *)src;
                    }
                    query_c++;
                } else {
                    count++;
                }
            }
        }
        count++;
    }
    return ('\0');
}