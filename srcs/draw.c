/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   draw.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 10:13:58 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 15:08:37 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static t_pos populate_position(int x, int y, int z)
{
	t_pos	pos;

	pos.x = x;
	pos.y = y;
	pos.z = z;
	return (pos);
}

void	draw(t_fdf *fdf, t_img *image)
{
	int		i;
	int		j;
	t_pos	pos_0;
	t_pos	pos_1;


	i = 0;
	while (i < fdf->map.height)
	{
		j = 0;
		while (j < fdf->map.width)
		{

			if (j < fdf->map.width - 1)
			{
				pos_0 = populate_position(j, i, fdf->map.grid[i][j]);
				pos_1 = populate_position(j + 1, i, fdf->map.grid[i][j + 1]);
				bresenham_algo(transform(pos_0, fdf), transform(pos_1, fdf), fdf, image);
			}
			if (i < fdf->map.height - 1)
			{
				pos_0 = populate_position(j, i, fdf->map.grid[i][j]);
				pos_1 = populate_position(j, i + 1, fdf->map.grid[i][i + 1]);
				bresenham_algo(transform(pos_0, fdf), transform(pos_1, fdf), fdf, image);
			}
			j++;
		}
		i++;
	}
}
