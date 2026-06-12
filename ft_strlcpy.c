/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:46:15 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/21 12:04:26 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	i = 0;
	while (src[src_len])
		src_len++;
	if (size == 0)
		return (src_len);
	while (src[i] != '\0' && i < (size - 1))
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (src_len);
}

// int	main(void)
// {
// 	char	str[42] = "hello";
// 	char	strr[42] = "Hello";
// 	char	str1[42];
// 	char	strr1[42];

// 	strlcpy(str1, str, 0);
// 	write(1, str1, 5);
// 	write(1, "\n", 1);
// 	ft_strlcpy(strr1, strr, 0);
// 	write(1, strr1, 5);
// 	write(1, "\n", 1);
// }
