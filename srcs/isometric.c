/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:19 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 14:40:07 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

int	isometric(t_pos *pos)
{
	t_pos	old;

	old = *pos;
	pos->x = (old.x - old.y) * 0.87;
	pos->y = (-old.z + (old.x + old.y)) * 0.523599;
	return (1);
}
