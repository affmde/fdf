/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   window.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:06:52 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:47:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int	handle_window(t_fdf *fdf)
{
	fdf->ptr = mlx_init();
	if (!fdf->ptr)
		return (0);
	fdf->win = mlx_new_window(fdf->ptr, WIDTH, HEIGHT, "My New Window");
	if (!fdf->win)
	{
		free(fdf->ptr);
		return (0);
	}
	mlx_hook(fdf->win, 2, 0, deal_key, fdf);
	mlx_hook(fdf->win, 17, 0, close_window, fdf);
	handle_img(fdf);
	mlx_loop(fdf->ptr);
	return (1);
}
