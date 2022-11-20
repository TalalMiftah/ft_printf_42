#include "ft_printf.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		i += write(1, "-2147483648", 11);
	if (n < 0 && n >= -2147483647)
	{
		i += write(1, "-", 1);
		n *= -1;
	}
	if (n >= 10)
	{
		i += ft_putnbr(n / 10);
		i += ft_putnbr(n % 10);
	}
	if (n >= 0 && n <= 9)
		i += ft_putchar(n + 48);
	return (i);
}
