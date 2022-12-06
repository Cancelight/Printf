
#include "ft_printf.h"

int ft_putchar(char c)
{
	write(1, &c, 1);
	return 1;
}

int ft_printstr(char *s)
{
	int ret = 0;
	char c;

	while(*s)
	{
		c = *s++;
		write(1, &c, 1);
		ret++;
	}
	return ret;
}

int	ft_strlength(const char *s)
{
	int	i;

	i = 0;
	while (s[i])
	{
		i++;
	}
	return (i);
}