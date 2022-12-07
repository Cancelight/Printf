#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int *p;
	int a = 0x145e24a;
	ft_printf("%p\n", -1);
	printf("%p\n", -1);
	ft_printf("%p %p\n", 9223372036854775807, -9223372036854775808);
	printf("%p %p\n", 9223372036854775807, -9223372036854775808);
	printf("%d %d\n", ft_printf("%p %p\n", 2147483647, -2147483648), printf("%p %p\n", 2147483647, -2147483648));
	printf("%p %p\n", 2147483647, -2147483648);
}
