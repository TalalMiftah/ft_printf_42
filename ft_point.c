#include "ft_printf.h"

int	ft_point(void *n)
{
	int	i;

	i = 0;
	i += write(1, "0x", 2);
	i += ft_putnbrx((size_t)n);
	return (i);
}
