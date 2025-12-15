/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbauch <jbauch@student.42wolfsburg.de>      +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 02:29:00 by jbauch             #+#    #+#            */
/*   Updated: 2025/12/15 02:29:00 by jbauch            ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"


void *ft_memmove(void *dest, const void *src, size_t n){
    if (!dest || !src)
        return (NULL);

    if (n == 0 || dest == src)
        return(dest);

    unsigned char *cdest;
    const unsigned char *csrc;
    unsigned char *temp;

    size_t i = 0;
    cdest = (unsigned char*)dest;
    csrc = (const unsigned char*)src;



    temp = malloc(n);
    if(!temp)
        return(NULL);





    i = 0;
    while (i < n){
        temp[i] = csrc[i];
        i++;
    }

    i = 0;
    while(i < n){
        cdest[i] = temp[i];
        i++;
    }
    free(temp);
    return (dest);
}
