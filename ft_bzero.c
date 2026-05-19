/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:27:40 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/18 13:42:13 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*str;

	str = (unsigned char *)s;
	while (n--)
	{
		*str = '\0';
		str++;
	}
}

// void	ft_bzero(void *s, size_t n)
// {
// 	ft_memset(s, 0, n);
// }

// int	main(void)
// {
// 	char	str[42] = "hello";
// 	char	strr[42] = "Hello";

// 	bzero(str, 3);
// 	write(1, str, 5);
// 	write(1, "\n", 1);
// 	ft_bzero(strr, 3);
// 	write(1, strr, 5);
// 	write(1, "\n", 1);
// }
