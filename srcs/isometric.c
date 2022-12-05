/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:19 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 12:58:26 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	isometric(t_pos *pos)
{
	t_pos	old;

	old = *pos;
	pos->x = (old.x - old.y) * 0.87;
	pos->y = (-old.z + (old.x + old.y)) * 0.50;
	return (1);
}
