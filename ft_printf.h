/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bkiziler <bkiziler@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 17:42:29 by bkiziler          #+#    #+#             */
/*   Updated: 2022/12/06 19:26:17 by bkiziler         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
#define FT_PRINTF_H
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int		ft_printf(const char *str, ...);
void	ft_check(va_list args, int *count, const char *str);
void	ft_secondcheck (va_list args, int *count, const char *str);
void	ft_puthexau(int n, int *i);
void	ft_puthexal(int n, int *i);
void	ft_unint(unsigned int n, int *i);
int		ft_putchar(char c);
int		ft_printstr(char *s);
int		ft_strlength(const char *s);
void	ft_putnbr(int n, int *i);

#endif
