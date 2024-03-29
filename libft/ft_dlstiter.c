/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dbendu <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:15:51 by dbendu            #+#    #+#             */
/*   Updated: 2019/04/08 20:15:52 by dbendu           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_dlstiter(t_dlist *list, void (*f)(t_dlist *elem))
{
	if (!list || !f)
		return ;
	while (list)
	{
		f(list);
		list = list->next;
	}
}
