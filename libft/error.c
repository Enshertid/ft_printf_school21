/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: user <user@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/07/30 20:08:29 by dbendu            #+#    #+#             */
/*   Updated: 2019/08/12 13:20:12 by user             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	error(const char *error_msg, int error_code)
{
	write(1, error_msg, ft_strlen(error_msg));
	write(1, "\n", 1);
	exit(error_code);
}
