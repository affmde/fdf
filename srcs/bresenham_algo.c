/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bresenham_algo.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 16:10:28 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 15:48:51 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static void line_params(t_pos pos_0, t_pos pos_1, t_params *params)
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

void	bresenham_algo(t_pos pos_0, t_pos pos_1 ,t_fdf *fdf, t_img *image)
{
	t_params	params;

	line_params(pos_0, pos_1, &params);
	printf("image[[4]: %d\n", image->data[4]);

	if (fdf->map.grid[pos_0.y][pos_0.x])
		fdf->map.color = 0xFF0000;
	else
		fdf->map.color = 0xffffff;
	pos_0.x *= ZOOM;
	pos_0.y *= ZOOM;
	pos_1.x *= ZOOM;
	pos_1.y *= ZOOM;
	// isometric(&pos_0);
	// isometric(&pos_1);
	while (pos_0.y != pos_1.y || pos_0.x != pos_1.x)
	{
		//mlx_pixel_put(fdf->ptr, fdf->win, pos_0.x + fdf->cam.offset_x, pos_0.y + fdf->cam.offset_y, fdf->map.color);
		//image->data[map->y0 * 500 + map->x0] = map->color;
		my_put_pixel(image, pos_0.x, pos_0.y, fdf->map.color);
		params.error = params.offset * 2;
		if (params.error > - params.dy)
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
	//mlx_pixel_put(fdf->ptr, fdf->win, pos_0.x, pos_0.y, fdf->map.color);
}
