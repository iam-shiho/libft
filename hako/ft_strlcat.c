/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:30:32 by swaragay          #+#    #+#             */
/*   Updated: 2026/04/30 21:21:43 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strlcat(char *dest, char *src)
{
	size_t	j;
	size_t	i;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	s1[30] = "abcdef";
	char	s2[10] = "ghijkl";

	printf("%s\n", ft_strcat(s1, s2));
	printf("%s\n", strcat(s1, s2));
	return (0);
}
