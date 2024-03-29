/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/08 20:14:43 by dbendu            #+#    #+#             */
/*   Updated: 2019/08/12 12:00:36 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd(t_list **list, t_list *new_elem)
{
	if (list && new_elem)
	{
		new_elem->next = *list;
		*list = new_elem;
		if ((*list)->next)
			(*list)->end = (*list)->next->end;
	}
}
