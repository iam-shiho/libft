/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 08:05:24 by swaragay          #+#    #+#             */
/*   Updated: 2026/06/05 19:06:08 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...) //引数のインデント
{
	va_list args;
	int len;

	va_start(args, format);
	len = 0;
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			which_conversion(format, args);
		}
		else
			write(1, format, 1);
		++format;
	}
	va_end(args);
	return (len);
}

char	which_conversion(char *format, va_list args) //各オプション？に分類
{
	if (*format != '%')
	{
		if (*format == 'c')
			ft_char(va_arg(args, int));
		else if (*format == 's')
			ft_putstr(va_arg(args, const char *));
		else if (*format == 'p')
			ft_pointer(va_arg(args, void *));
		else if (*format == 'd' || *format == 'i')
			ft_num(va_arg(args, int));
		else if (*format == 'u')
			ft_unnum(va_arg(args, unsigned int));
		else if (*format == 'x' || *format == 'X')
			ft_hex(va_arg(args, unsigned int));
	}
	else if (*format == '%')
		write(1, '%', 1);
}
