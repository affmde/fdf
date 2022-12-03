/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 18:30:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_window(t_fdf *fdf)
{
	t_img *image;

	if (!(image = (t_img *)malloc(sizeof(t_img))))
		return (0);
	fdf->ptr = mlx_init();
	fdf->win = mlx_new_window(fdf->ptr, WIDTH, HEIGHT, "My New Window");
	mlx_hook(fdf->win, 2, 0, deal_key, &fdf);
	mlx_hook(fdf->win, 17, 0, close_window, &fdf);
	handle_img(fdf, image);
	mlx_loop(fdf->ptr);
	free(image);
	return (1);
}
