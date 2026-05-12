/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 16:53:13 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/12 16:21:14 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*dest; //malloc(0) はNULLまたは

	if (size != 0 && nmemb >= SIZE_MAX / size) //割る数が０にならないように検証している。
		return (NULL);
	dest = malloc(nmemb * size);
	if (!dest)
		return (NULL);
	ft_bzero(dest, nmemb * size);
	return (dest);
}

// int	main(void)
// {
// 	char	*ch;

// 	ch = (char *)calloc(0, 5);
// 	write(1, ch, 0);
// 	free(ch);
// 	write(1, "\n", 1);
// 	ch = (char *)ft_calloc(0, 5);
// 	write(1, ch, 0);
// 	free(ch);
// }

/*Depending on your current operating system, the ’calloc’ function’s
behavior may differ from its man page description. You must follow
this rule: If nmemb or size is 0, then calloc() returns a unique
pointer value that can be successfully passed to	free(void).*/
