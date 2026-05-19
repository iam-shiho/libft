/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:24:46 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/19 15:28:29 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (!dest && !src)
		return (NULL);
	if (d < s)
	{
		while (n--)
		{
			*d = *s;
			d++;
			s++;
		}
	}
	else if (d > s)
	{
		while (n--)
			d[n] = s[n];
	}
	return (dest);
}

// int	main(void)
// {
// 	char	dest[30] = {0};
// 	char	str[30] = "Hello";
// 	char	dest1[30] = {0};
// 	char	str1[30] = "Hello";

// 	memmove(dest, str, 3);
// 	write(1, str, 5);
// 	write(1, "\n", 1);
// 	ft_memmove(dest1, str1, 3);
// 	write(1, dest1, 5);
// 	write(1, "\n", 1);
// }
