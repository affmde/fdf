/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:13:58 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 13:36:30 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static t_pos	populate_position(int x, int y, int z)
{
	t_pos	pos;

	pos.x = x;
	pos.y = y;
	pos.z = z;
	if (pos.z)
		pos.color = 0xFF0000;
	else
		pos.color = 0xffffff;
	return (pos);
}

static void	call_bresenham(t_fdf *fdf, t_img *image, int i, int j)
{
	t_pos	pos_0;
	t_pos	pos_1;

	if (j < fdf->map->width - 1)
	{
		pos_0 = populate_position(j, i, fdf->map->grid[i][j]);
		pos_1 = populate_position(j + 1, i, fdf->map->grid[i][j + 1]);
		bresenham_algo(transform(pos_0, fdf),
			transform(pos_1, fdf), image);
	}
	if (i < fdf->map->height - 1)
	{
		pos_0 = populate_position(j, i, fdf->map->grid[i][j]);
		pos_1 = populate_position(j, i + 1, fdf->map->grid[i + 1][j]);
		bresenham_algo(transform(pos_0, fdf),
			transform(pos_1, fdf), image);
	}
}

void	draw(t_fdf *fdf, t_img *image)
{
	int		i;
	int		j;

	i = 0;
	while (i < fdf->map->height)
	{
		j = 0;
		while (j < fdf->map->width)
			call_bresenham(fdf, image, i, j++);
		i++;
	}
}
