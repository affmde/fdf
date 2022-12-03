/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:20:15 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 14:15:36 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

void	my_put_pixel(t_img *image, int x, int y, int color)
{
	int		offset;

	offset = y * (image->size_l / 4) + x;
	if ((x >= 0 && x < WIDTH) && (y >= 0 && y < HEIGHT))
		image->data[offset] = color;
}
