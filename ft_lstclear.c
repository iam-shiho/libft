/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: swaragay <swaragay@student.42.jp>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 17:59:40 by swaragay          #+#    #+#             */
/*   Updated: 2026/05/09 18:47:43 by swaragay         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list *dest;

	while(*lst != NULL)
	{
		dest = (*lst) -> next;
		del((*lst) -> content);
		free(*lst);
		*lst = dest;
	}
	*lst = NULL;
}
