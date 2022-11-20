#include "ft_printf.h"

int	ft_putuphex(unsigned int n)
{
	int		i;
	char	*hex;

	i = 0;
	hex = "0123456789ABCDEF";
	if (n > 15)
	{
		i += ft_putuphex(n / 16);
		i += ft_putuphex(n % 16);
	}
	if (n >= 0 && n <= 15)
		i += ft_putchar(hex[n]);
	return (i);
}
