/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 15:09:41 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/19 18:24:23 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t			i;
	unsigned char	w;

	i = 0;
	w = (unsigned char)c;
	while (s[i] != '\0')
		i++;
	if (c == '\0')
		return ((char *)&s[i]);
	while (i != 0)
	{
		if (s[i] == w)
			return ((char *)&s[i]);
		i--;
	}
	if (s[0] == w)
		return ((char *)&s[0]);
	return (NULL);
}

// int	main(void)
// {
// 	char	str[20] = "Hello";

// 	printf("%s\n", strrchr(str, 'l'));
// 	printf("%s\n", strrchr(str, '\0'));
// 	printf("%s\n", ft_strrchr(str, 'l'));
// 	printf("%s\n", ft_strrchr(str, '\0'));
// }
