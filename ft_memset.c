/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbauch <jbauch@student.42wolfsburg.de>      +#+  +:+       +#+       */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/15 02:29:00 by jbauch             #+#    #+#            */
/*   Updated: 2025/12/15 02:29:00 by jbauch            ###   ########.fr      */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*csrc;

	csrc = (unsigned char *)s;
	while (n > 0)
	{
		*(csrc++) = c;
		n--;
	}
	return (s);
}

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char *test;
	test = (char *)malloc(5 * sizeof(char));

	test[0] = 'a';
	test[1] = 'b';
	test[2] = 'c';
	test[3] = 'd';
	test[4] = '\0';
	ft_memset((void *)test, 43846238, 1);
	printf("%s\n", test);
	return (0);
}