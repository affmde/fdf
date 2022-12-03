/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:14 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 17:12:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static int	get_zoom(t_fdf *fdf)
{
	int	zoom;
	
	if (fdf->map->height > fdf->map->width)
		zoom = HEIGHT / fdf->map->height;
	else
		zoom = WIDTH / fdf->map->width;
	zoom *=0.75;
	return (zoom);
}

static int	cam_setup(t_fdf *fdf)
{
	t_cam *cam;
	
	if (!(cam = (t_cam *)malloc(sizeof(t_cam))))
		return (0);
	cam->zoom = get_zoom(fdf);
	cam->offset_x = (WIDTH - fdf->map->width * ZOOM) / 2;
	cam->offset_y = (HEIGHT - fdf->map->height * ZOOM) / 2;
	cam->depth = 20;
	fdf->cam = cam;
	return (1);
}

int	setup(t_fdf *fdf)
{
	if (!cam_setup(fdf))
		return (0);
	return (1);
}
