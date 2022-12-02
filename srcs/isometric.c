/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   isometric.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 10:44:19 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 15:07:26 by andrferr         ###   ########.fr       */
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
	pos->y = -old.z + (old.x + old.y) * sin(ang);
	pos->x = (old.x - old.y) * cos(ang);
	printf("%d - %d\n", pos->x, pos->y);
	//*x = (tmp_x - *y) * cos(ang);
	//*y = (*y + tmp_x) * sin(ang) - z;
	//*x = tmp_x * cos(ang) - *y * sin(ang);
	//*y = tmp_x * sin(ang) + *y * cos(ang) - z;
	//printf("%d %d %d %f\n", *x, *y, z, ang);
	return (1);
}
