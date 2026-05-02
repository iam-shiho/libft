/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 10:52:33 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/02 11:25:32 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*dest;
	unsigned int	i;

	i = 0;
	dest = malloc(sizeof(char) * len);
	if (!dest)
		return (NULL);
	while (i < (len - 1))
	{
		dest[i] = s[start];
		start++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

int	main(void)
{
	char	str[20] = "abcdefghijk";
	char	*dest;

	dest = ft_substr(str, 4, 0);
	write(1, dest, 2);
	write(1, "\n", 1);
	free(dest);
}
