#include "ft_printf.h"

int	ft_putunbr(unsigned int n)
{
	int	i;

	i = 0;
	if (n >= 10)
	{
		i += ft_putunbr(n / 10);
		i += ft_putunbr(n % 10);
	}
	if (n >= 0 && n <= 9)
		i += ft_putchar(n + 48);
	return (i);
}
