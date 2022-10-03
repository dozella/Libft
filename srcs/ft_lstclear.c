/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dozella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 01:49:40 by dozella           #+#    #+#             */
/*   Updated: 2022/04/20 05:12:59 by dozella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*temp;

	if (!*lst || !lst || !del)
		return ;
	while (*lst)
	{
		temp = *lst;
		(*del)((*lst)->content);
		*lst = (*lst)->next;
		free(temp);
	}
}
