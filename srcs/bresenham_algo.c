/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:10:28 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 14:37:35 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static void	set_color(t_pos *pos0, t_pos *pos1)
{
	if (pos0->z || pos1->z)
	{
		if (pos0->z == pos1->z)
		{
			if (pos0->z > 0)
			{
				pos0->color = 0xFF0000;
				pos1->color = 0xFF0000;
			}
			else
			{
				pos0->color = 0x00FFFF;
				pos1->color = 0x00FFFF;
			}
		}
		else if (pos0->z != pos1->z)
		{
			pos0->color = 0xffff00;
			pos1->color = 0xffff00;
		}
	}
}

static void	line_params(t_pos pos_0, t_pos pos_1, t_params *params)
{
	if (pos_0.x < pos_1.x)
		params->sx = 1;
	else
		params->sx = -1;
	if (pos_0.y < pos_1.y)
		params->sy = 1;
	else
		params->sy = -1;
	params->dx = ft_abs(pos_1.x - pos_0.x);
	params->dy = ft_abs(pos_1.y - pos_0.y);
	params->offset = params->dx - params->dy;
	params->error = 0;
}

void	bresenham_algo(t_pos pos_0, t_pos pos_1, t_img *image)
{
	t_params	params;

	line_params(pos_0, pos_1, &params);
	set_color(&pos_0, &pos_1);
	while (pos_0.y != pos_1.y || pos_0.x != pos_1.x)
	{
		my_put_pixel(image, pos_0.x, pos_0.y, pos_0.color);
		params.error = params.offset * 2;
		if (params.error > -params.dy)
		{
			params.offset -= params.dy;
			pos_0.x += params.sx;
		}
		if (params.error < params.dx)
		{
			params.offset += params.dx;
			pos_0.y += params.sy;
		}
	}
}
