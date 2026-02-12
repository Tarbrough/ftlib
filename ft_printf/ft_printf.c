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

static int  ft_format(char specifier, va_list args)
{
    if (specifier == 'c')
        return (ft_putchar(va_arg(args, int)));
    if (specifier == 's')
        return (ft_putstr_fd(va_arg(args, int)));
    if (specifier == 'p')
        return (ft_putptr(va_arg(args, int)));
    if (specifier == 'd')
        return (ft_putnbr_fd(va_arg(args, int)));
    if (specifier == 'u')
        return (ft_putunsigned_fd(va_arg(args, int)));
    if (specifier == 'x')
        return (ft_puthex(va_arg(args, int)));
    if (specifier == '%')
        return (write(1, "%"), 1));
    return(0);

}

int ft_printf(const char *format, ...){
    va_list args;
    va_start(   args,   format);

    int i;
    int index;

    i = 0;
    index = 0;

    while(format[index])
    {
        if (format[index] == '%')
        {
            i += ft_format(format[index + 1], args);
        }
        else
            i += ft_putchar_fd(format[index]) ;

        index ++; 
        return (i);
    }

}