/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 08:05:24 by swaragay          #+#    #+#             */
/*   Updated: 2026/06/04 16:15:03 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

int	ft_printf(const char *format, ...) //引数のインデント
{
	va_list args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format != '%')
			{
				if (*format == 'c')
					ft_char(va_arg(args, int));
				else if (*format == 's')
					ft_putstr(va_arg(args, const char *));
				else if (*format == 'p')
					ft_pointer(va_arg(args, void *));
				else if (*format == 'd' || *format == 'i' || *format == 'u')
					ft_num(*format, count_arg);
				else if (*format == 'x' || *format == 'X')
					ft_hex(*format, count_arg);
				else
					write(1, *format, 1);
			}
			else if (*format == '%')
				write(1, '%', 1);
		}
		++format;
	}
	va_end(args);
}

char	which_conversion(char *format, int count_arg) //各オプション？に分類
{
	if (*format == 'c')
		ft_char(*format, count_arg);
	else if (*format == 's')
		ft_str(*format, count_arg);
	else if (*format == 'p')
		ft_pointer(*format, count_arg);
	else if (*format == 'd' || *format == 'i' || *format == 'u')
		ft_num(*format, count_arg);
	else if (*format == 'x' || *format == 'X')
		ft_hex(*format, count_arg);
	else
		write(1, *format, 1);
}
