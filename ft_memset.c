/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 20:18:16 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/21 10:59:21 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*str;
	unsigned char	c_dest;

	str = (unsigned char *)s;
	c_dest = (unsigned char)c;
	while (n > 0)
	{
		*str = c_dest;
		str++;
		n--;
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
