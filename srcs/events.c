/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:00:39 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:34:38 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	close_window(t_fdf *fdf)
{
	fdf->error_code = 1;
	exit(fdf->error_code);
}

void	refresh_window(t_fdf *fdf)
{
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
	else if (keycode == 124 || keycode == 123 || keycode == 125
		|| keycode == 126)
		handle_rotation(keycode, fdf);
	return (0);
}
