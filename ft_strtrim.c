/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 12:55:00 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/15 16:50:08 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t			s1_len;
	size_t			i;
	unsigned int	first_i;
	char			*dest;

	i = 0;
	if (!s1 || !set)
		return (NULL);
	s1_len = ft_strlen(s1);
	while (s1[i] != '\0' && ft_strchr(set, (int)s1[i]))
		++i;
	first_i = i;
	i = s1_len;
	while (i > 0 && ft_strchr(set, (int)s1[i - 1]))
		--i;
	dest = ft_substr(s1, first_i, i - first_i);
	if (!dest)
		return (NULL);
	return (dest);
}

// int	main(void)
// {
// 	char	s1[10] = "Hello";
// 	char	set[10] = "ll";
// 	char	*dest;

// 	dest = ft_strtrim(s1, set);
// 	write(1, dest, ft_strlen(dest));
// }
