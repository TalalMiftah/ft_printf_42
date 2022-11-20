#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <unistd.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_point(void *n);
int	ft_printf(const char *s, ...);
int	ft_putchar(char c);
int	ft_putnbr(int n);
int	ft_putnbrx(size_t n);
int	ft_putstr(const char *s);
int	ft_putunbr(unsigned int n);
int	ft_putuphex(unsigned int n);

#endif
