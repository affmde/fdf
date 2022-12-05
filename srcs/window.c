/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 12:55:08 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_window(t_fdf *fdf)
{
	t_img	*image;

	image = (t_img *)malloc(sizeof(t_img));
	if (!image)
		return (0);
	(fdf->ptr = mlx_init());
	if (!fdf->ptr)
	{
		free(image);
		return (0);
	}
	fdf->win = mlx_new_window(fdf->ptr, WIDTH, HEIGHT, "My New Window");
	if (!fdf->win)
	{
		free(image);
		free(fdf->ptr);
		return (0);
	}
	mlx_loop_hook(fdf->ptr, &handle_no_event, fdf);
	mlx_hook(fdf->win, 2, 0, deal_key, fdf);
	mlx_hook(fdf->win, 17, 0, close_window, fdf);
	handle_img(fdf, image);
	mlx_destroy_image(fdf->ptr, image);
	mlx_loop(fdf->ptr);
	return (1);
}
