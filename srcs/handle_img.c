/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:49:37 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:43:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_img(t_fdf *fdf)
{
	t_img	*image;

	image = (t_img *)malloc(sizeof(t_img));
	if (!image)
		return (0);
	fdf->image = image;
	fdf->image->img_ptr = mlx_new_image(fdf->ptr, WIDTH, HEIGHT);
	fdf->image->data = (int *)mlx_get_data_addr(fdf->image->img_ptr,
			&fdf->image->bpp, &fdf->image->size_l, &fdf->image->endian);
	draw(fdf, fdf->image);
	mlx_put_image_to_window(fdf->ptr, fdf->win, fdf->image->img_ptr, 0, 0);
	return (1);
}
