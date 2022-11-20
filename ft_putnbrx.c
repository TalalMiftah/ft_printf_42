#include "ft_printf.h"

int	ft_putnbrx(size_t n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789abcdef";
	if (n > 15)
	{
		i += ft_putnbrx(n / 16);
		i += ft_putnbrx(n % 16);
	}
	if (n >= 0 && n <= 15)
		i += ft_putchar(hex[n]);
	return (i);
}
