/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 13:02:27 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/18 14:02:13 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	if (!s || !f)
		return ;
	i = 0;
	while (s[i] != '\0')
	{
		f(i, &s[i]);
		i++;
	}
}

// void	ft_toupp(unsigned int i, char *s)
// {
// 	while (s[i] != '\0')
// 	{
// 		if (s[i] >= 97 && s[i] <= 122)
// 			s[i] = s[i] - 32;
// 		i++;
// 	}
// }

// int	main(void)
// {
// 	char	s[10] = "abcdefG";
// 	ft_striteri(s, ft_toupp);

// 	write(1, s, ft_strlen(s) + 1);
// 	write(1, "\n", 1);
// }
