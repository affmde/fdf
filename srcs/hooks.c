/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hooks.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/06 13:28:18 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 14:39:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

void	handle_zoom(int keycode, t_fdf *fdf)
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
	refresh_window(fdf);
}

void	handle_z(int keycode, t_fdf *fdf)
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
	refresh_window(fdf);
}

int	handle_rotation(int keycode, t_fdf *fdf)
{
	if (keycode == 124)
		fdf->cam->x_translation -= 5;
	else if (keycode == 123)
		fdf->cam->x_translation += 5;
	else if (keycode == 125)
		fdf->cam->y_translation -= 5;
	else if (keycode == 126)
		fdf->cam->y_translation += 5;
	refresh_window(fdf);
	return (1);
}
