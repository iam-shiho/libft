/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/01 14:22:26 by swaragay          #+#    #+#             */
/*   Updated: 2026/06/01 19:16:54 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_printf(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
		{
			++format;
			if (*format == '%')
				write(1, '%', 1);
			else if (*format == 'c')
				ft_char(*format);
			else if (*format == 's')
				ft_str(*format);
			else if (*format == 'p')
				ft_pointer(*format);
			else if (*format == 'd')
				ft_;
			else if (*format == 'i' || *format == 'u')
					//符号ありかなしかさいしょに判断する(if文で最初に)
			else if (*format == 'x' || *format == 'X')
						//大文字か小文字か判断する（toupper）
		}
		++format;
	}
	va_end(args);
}
