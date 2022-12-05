/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 09:26:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_window(t_fdf *fdf)
{
	t_img *image;

	if (!(image = (t_img *)malloc(sizeof(t_img))))
		return (0);
	if(!(fdf->ptr = mlx_init()))
	{
		free(image);
		return (0);
	}
	if (!(fdf->win = mlx_new_window(fdf->ptr, WIDTH, HEIGHT, "My New Window")))
	{
		free(image);
		free(fdf->ptr);
		return (0);
	}
	mlx_hook(fdf->win, 2, 0, deal_key, &fdf);
	mlx_hook(fdf->win, 17, 0, close_window, &fdf);
	handle_img(fdf, image);
	mlx_loop(fdf->ptr);
	mlx_destroy_display(fdf->ptr);
	free(fdf->win);
	free(image);
	return (1);
}
