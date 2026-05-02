/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/23 16:30:32 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/01 22:50:29 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// size_t	ft_strlcat(char *dest, const char *src, size_t size)
// {
// 	size_t	i;
// 	size_t	j;

// 	i = 0;
// 	j = 0;
// 	while(dest[i] != '\0')
// 		i++;
// 	while (src[j] != '\0' && j < (size - 1))
// 	{
// 		dest[i] = src[j];
// 		j++;
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (i);
// }

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	d_len;
	size_t	s_len;

	s_len = ft_strlen(src);
	d_len = 0;
	while (dst[d_len] && d_len < size)
		d_len++;
	if (d_len == size)
		return (size + s_len);
	i = d_len;
	j = 0;
	while (src[j] && (i + 1) < size)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (d_len + s_len);
}

int	main(void)
{
	char	s1[30] = "abcdef";
	char	s2[10] = "ghijkl";
	size_t	len;

	len = strlcat(s1, s2, 3);
	write(1, s1, len);
	write(1,"\n",1);
	len = ft_strlcat(s1, s2, 3);
	write(1,s1,len);
	return (0);
}
