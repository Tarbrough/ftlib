/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbauch <jbauch@student.42wolfsburg.de>      +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 02:29:00 by jbauch             #+#    #+#            */
/*   Updated: 2025/12/15 02:29:00 by jbauch            ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void *ft_memchr(const void *src, int c, size_t n){
    unsigned char *csrc = (unsigned char*)src;
    unsigned int count = 0;
    unsigned char ch = (unsigned char)c;


    while ( count < n){
        if (csrc[count] == ch){
            return(&csrc[count]);
        }
        count++;
    }
    return (NULL);
}