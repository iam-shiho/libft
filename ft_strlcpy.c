/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 09:46:15 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/01 21:14:51 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dest, char *src, size_t destsize)
{
	unsigned int	i;
	unsigned int	j;

	i = 0;
	j = 0;
	while (src[i])
		i++;
	if (destsize == 0)
		return (i);
	while (src[j] != '\0' && j < (destsize - 1))
	{
		dest[j] = src[j];
		j++;
	}
	dest[j] = '\0';
	return (i);
}

int	main(void)
{
	char	str[42] = "hello";
	char	strr[42] = "Hello";
	char	str1[42];
	char	strr1[42];

	strlcpy(str1, str, 0);
	write(1, str1, 5);
	write(1, "\n", 1);
	ft_strlcpy(strr1, strr, 0);
	write(1, strr1, 5);
	write(1, "\n", 1);
}
