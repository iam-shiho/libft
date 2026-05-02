/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:18:16 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/01 20:30:45 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int asc, size_t len)
{
	unsigned char	*str;
	unsigned char	c;

	str = (unsigned char *)s;
	c = (unsigned char)asc;
	while (len > 0)
	{
		*str = c;
		str++;
		len--;
	}
	return (s);
}

// int	main(void)
// {
// 	char	str[42] = "hello";
// 	char	strr[42] = "Hello";

// 	memset(str, 'w', 3);
// 	printf("%s\n", str);
// 	ft_memset(strr, 'w', 3);
// 	printf("%s\n", str);
// }
