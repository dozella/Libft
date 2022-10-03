/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dozella <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/14 00:02:40 by dozella           #+#    #+#             */
/*   Updated: 2022/04/19 20:17:38 by dozella          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t size)
{
	void	*tab;

	tab = NULL;
	if ((n == SIZE_MAX) || (size == SIZE_MAX))
		return (0);
	tab = (void *)malloc(n * size);
	if (tab != NULL)
		ft_bzero(tab, n * size);
	return (tab);
}
