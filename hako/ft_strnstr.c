/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/30 20:13:31 by swaragay          #+#    #+#             */
/*   Updated: 2026/04/30 21:22:50 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char *ft_strnstr(const char *big, const char *little, size_t len)
// {

// }


int	main(void)
{
	char	lstr[20] = "Foo Bar Baz";
	char	sstr[20] = "Bar";
	char	*ptr;

	ptr = strnstr(lstr, sstr, 10);
	if (ptr != NULL)
		printf("%s\n", ptr);
	else
		printf("Not found\n");
	return (0);
}
