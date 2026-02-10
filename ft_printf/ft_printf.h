#ifndef FT_PRINTF_H
#   define FT_PRINTF_H

#   include <stdarg.h>
#   include <unistd.h>

/*Main*/
int ft_printf(const char *string, ...);

/*Library Functions*/
int ft_putchar(char c);
int ft_putstr_fd(char *s);
int ft_putnbr_fd(int n);
int ft_printhex(unsigned int n, char string);
int ft_printunsigned(unsigned int n);
int ft_printpointer(unsigned long long pointer);

#endif