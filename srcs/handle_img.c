/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_img.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 17:49:37 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 11:12:48 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_img(t_fdf *fdf, t_img *image)
{
	image->img_ptr = mlx_new_image(fdf->ptr, WIDTH, HEIGHT);
	image->data = (int *)mlx_get_data_addr(image->img_ptr, &image->bpp, &image->size_l, &image->endian);
	draw(fdf, image);
	mlx_put_image_to_window(fdf->ptr, fdf->win, image->img_ptr, 0, 0);
	return (1);
}
