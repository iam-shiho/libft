/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 12:46:21 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/19 17:53:22 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	w;

	w = (char)c;
	while (*s)
	{
		if (*s == w)
			return ((char *)s);
		s++;
	}
	if (w == '\0')
		return ((char *)s);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Hello";

// 	printf("%s\n", strchr(str, 'l'));
// 	printf("%s\n", strchr(str, '\0'));
// 	printf("%s\n", ft_strchr(str, 'l'));
// 	printf("%s\n", ft_strchr(str, '\0'));
// }
