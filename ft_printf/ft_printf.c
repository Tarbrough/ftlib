/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Justus <jbauch@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/31 18:51:02 by jbauch            #+#    #+#             */
/*   Updated: 2026/01/31 18:51:02 by jbauch           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static int  format(char specifier, va_list args)
{
    if (specifier == 'c')
        return (ft_putchar(va_arg(args, int)));
}

int ft_printf(const char *format, ...){
    va_start(   args,   format);

}