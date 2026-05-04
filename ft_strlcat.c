/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:30:32 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/03 20:52:30 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	s_len;

	i = 0;
	j = 0;
	s_len = ft_strlen(src);
	while (dest[i] != '\0' && i < size)
		i++;
	if (i == size)
		return (size + s_len);
	while (src[j] != '\0' && (i + j) < (size - 1))
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (i + s_len);
}

int	main(void)
{
	char	s1[30] = "abcdef";
	char	s2[10] = "ghijkl";
	size_t	len;

	// len = strlcat(s1, s2, 3);
	// write(1, s1, len);
	// write(1,"\n",1);
	len = ft_strlcat(s1, s2, 10);
	write(1, s1, len);
	return (0);
}
