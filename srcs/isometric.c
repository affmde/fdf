/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:19 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 14:45:21 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	isometric(t_pos *pos)
{
	double	ang;
	t_pos	old;
	
	ang = 0.7;
	old = *pos;
	pos->x = old.x * cos(ang) - old.y * sin(ang);
	pos->y = old.x * sin(ang) + old.y * cos(ang) - old.z;
	return (1);
}
