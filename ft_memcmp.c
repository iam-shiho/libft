/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:39:59 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/04 19:17:55 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*str1;
	const unsigned char	*str2;
	unsigned int		i;

	i = 0;
	str1 = (const unsigned char *)s1;
	str2 = (const unsigned char *)s2;
	if (n == 0)
		return (0);
	while (str1[i] != '\0' && str2[i] != '\0' && (str1[i] == str2[i]) && n != 0)
	{
		i++;
		n--;
	}
	return (str1[i] - str2[i]);
}

// int	main(void)
// {
// 	char	s1[20] = "abcdefghijk";
// 	char	s2[20] = "abcdefghijk";

// 	printf("%d\n", ft_memcmp(s1, s2, 15));
// 	printf("%d\n", memcmp(s1, s2, 15));
// }
