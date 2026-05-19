/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 22:07:32 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/19 15:09:43 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	if (!dest && !src)
		return (NULL);
	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	while (n--)
	{
		*d = *s;
		d++;
		s++;
	}
	return (dest);
}

// int	main(void)
// {
// 	char	str[42] = "hello";
// 	char	strr[42] = "Hello";
// 	char	str1[42];
// 	char	strr1[42];

// 	memcpy(str1, str, 3);
// 	write(1, str1, 5);
// 	write(1, "\n", 1);
// 	ft_memcpy(strr1, strr, 3);
// 	write(1, strr1, 5);
// 	write(1, "\n", 1);
// }
