/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:00:39 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 20:48:28 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	close_window(t_fdf *fdf)
{
	fdf->error_code = 1;
	exit(fdf->error_code);
}

static void	handle_zoom(int keycode, t_fdf *fdf)
{
	if (keycode == 46)
	{
		fdf->cam->zoom += 3;
		if (fdf->cam->zoom > 100)
			fdf->cam->zoom = 100;
	}
	else
	{
		fdf->cam->zoom -= 3;
		if (fdf->cam->zoom < 0)
			fdf->cam->zoom = 1;
	}
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_destroy_image(fdf->ptr, fdf->image);
	handle_img(fdf);
}

static void	handle_z(int keycode, t_fdf *fdf)
{
	if (keycode == 11)
	{
		fdf->cam->z_transform++;
		if (fdf->cam->z_transform > 10)
			fdf->cam->z_transform = 10;
	}
	else if (keycode == 9)
	{
		fdf->cam->z_transform--;
		if (fdf->cam->z_transform < -10)
			fdf->cam->z_transform = -10;
	}
	mlx_clear_window(fdf->ptr, fdf->win);
	mlx_destroy_image(fdf->ptr, fdf->image);
	handle_img(fdf);
}

int	deal_key(int keycode, t_fdf *fdf)
{
	if (keycode == 53)
	{
		mlx_destroy_window(fdf->ptr, fdf->win);
		exit(1);
	}
	else if (keycode == 46 || keycode == 45)
		handle_zoom(keycode, fdf);
	else if (keycode == 11 || keycode == 9)
		handle_z(keycode, fdf);
	return (0);
}
