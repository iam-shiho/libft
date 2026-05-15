/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 10:52:33 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/15 11:49:24 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	i;
	size_t	s_len;

	i = 0;
	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	if (start >= s_len)
		return (ft_strdup(""));
	if (len > s_len - start)
		len = s_len - start;
	dest = malloc(sizeof(char) * (len + 1));
	if (!dest)
		return (NULL);
	ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}

// int	main(void)
// {
// 	char	str[20] = "abcdefghijk";
// 	char	*dest;

// 	dest = ft_substr(str, 4, 2);
// 	write(1, dest, 2);
// 	write(1, "\n", 1);
// 	free(dest);
// }
