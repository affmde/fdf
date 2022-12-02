/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   graphics_utils.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 15:20:15 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 15:57:18 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

void	my_put_pixel(t_img *image, int x, int y, int color)
{
	int		offset;
	char	*dst;

	offset = (y * image->size_l + x * (image->bpp / 8));
	dst = image->data + offset;
	*(unsigned int *)dst = color;
}
