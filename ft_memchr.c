/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 17:56:52 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/18 13:52:37 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s1;
	unsigned char	c1;

	s1 = (unsigned char *)s;
	c1 = (unsigned char)c;
	while (n != 0)
	{
		if (*s1 == c1)
			return (s1);
		s1++;
		n--;
	}
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Hello";
// 	char	*s1;
// 	char	str1[20] = "Hello";
// 	char	*s2;

// 	s1 = memchr(str, 'l', 3);
// 	printf("%s\n", s1);
// 	s2 = ft_memchr(str1, 'l', 3);
// 	printf("%s\n", s2);
// }
