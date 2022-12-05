/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   events.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:00:39 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 13:23:34 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	close_window(t_fdf *fdf)
{
	fdf->error_code = 1;
	exit(fdf->error_code);
}

int	deal_key(int keycode, t_fdf *fdf)
{
	if (keycode == 53)
	{
		mlx_destroy_window(fdf->ptr, fdf->win);
		free(fdf->win);
		exit(1);
	}
	return (0);
}

int	handle_no_event(t_fdf *data)
{
	data->error_code = 1;
	return (data->error_code);
}
