/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 15:36:57 by bkiziler          #+#    #+#             */
/*   Updated: 2022/12/06 18:03:51 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
int ft_printf(const char * str, ...)
{
	va_list arguments;
	int *countc;

	va_start(arguments, str);
	countc = malloc(sizeof(int) * 1);
	*countc = 0;
	while (*str != '\0')
	{
		if (*str != '%' && *str != '\0')
		{
			*countc += ft_putchar(*str);
		}
		else
		{
			str++;
			ft_check(arguments, countc, str);
			ft_secondcheck(arguments, countc, str);
		}
		str++;
	}
	va_end(arguments);
	return(*countc);
}
