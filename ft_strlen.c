/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 13:57:01 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/18 14:04:35 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count] != '\0')
	{
		count++;
	}
	return (count);
}

// int	main(void)
// {
// 	char	str[30] = "Hello";

// 	printf("文字数は%dです\n", ft_strlen(str));
// 	printf("文字数は%luです\n", strlen(str));
// }
