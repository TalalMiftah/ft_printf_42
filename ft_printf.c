#include "ft_printf.h"

static int	ft_out(va_list list, const char *s, int i)
{
	int	count;

	count = 0;
	if (s[i] == '%')
		count += ft_putchar(s[i]);
	else if (s[i] == 'c')
		count += ft_putchar(va_arg(list, int));
	else if (s[i] == 'd' || s[i] == 'i')
		count += ft_putnbr(va_arg(list, int));
	else if (s[i] == 's')
		count += ft_putstr(va_arg(list, char *));
	else if (s[i] == 'u')
		count += ft_putunbr(va_arg(list, unsigned int));
	else if (s[i] == 'x')
		count += ft_putnbrx(va_arg(list, unsigned int));
	else if (s[i] == 'X')
		count += ft_putuphex(va_arg(list, unsigned int));
	else if (s[i] == 'p')
		count += ft_point(va_arg(list, void *));
	else
		count += ft_putchar(s[i]);
	return (count);
}

int	ft_printf(const char *s, ...)
{
	va_list	list;
	int		i;
	int		ln;

	i = 0;
	ln = 0;
	va_start(list, s);
	while (s[i])
	{
		if (s[i] != '%')
			ln += ft_putchar(s[i]);
		else if (s[i] == '%')
		{
			i++;
			if (!s[i])
				return (ln);
			ln += ft_out(list, s, i);
		}
		i++;
	}
	va_end(list);
	return (ln);
}
