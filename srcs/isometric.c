/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:19 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/04 10:04:56 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	isometric(t_pos *pos)
{
	//double	ang;
	t_pos	old;
	
	//ang = 0.65;
	old = *pos;
	//pos->x = old.x * cos(ang) - old.y * sin(ang);
	//pos->y = old.x * sin(ang) + old.y * cos(ang) - old.z;
	pos->x = (old.x - old.y) * 0.866025291;
	pos->y = (-old.z + (old.x + old.y)) * 0.500000194;
	return (1);
}
