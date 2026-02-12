/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:51:02 by jbauch            #+#    #+#             */
/*   Updated: 2026/02/12 15:23:24 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_puthex(unsigned int n, char c, size_t *ret, size_t *i)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (c == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
		ft_puthex(n / 16, c, ret, i);
	ft_putchar_fd(hex[n % 16], 1, ret);
	if (n < 16)
		*i = *i + 1;
}
