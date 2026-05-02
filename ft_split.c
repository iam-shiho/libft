/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:37:57 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/02 21:56:32 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char	**ft_split(char const *s, char c)
{
	char			**dest;
	unsigned int	i;
	unsigned int	count;

	i = 0;
	while (s[i] != '\0')
	{
		if (ft_strchr(c, (int)s[i]))//一致したぽいんたーを返す
			count++;
		i++;
	}
	dest = malloc(sizeof(char) * (count + 2));
	while (dest )
	{
		dest[i] = ft_substr(s, ft_strchr(c, (int)s[i]), size_t len);
	}
	dest[i] = NULL;
	return (dest);
}

/*
区切る数を求める（+2はNULLと分けるとき区切る数＋１配列ができるから）
ft_substrで文字を区切り、配列を格納する。

*/
