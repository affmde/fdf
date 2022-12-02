/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   setup.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:55:14 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 14:26:42 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static void	cam_setup(t_fdf *fdf)
{
	fdf->cam.zoom = ZOOM;
	fdf->cam.offset_x = (WIDTH - fdf->map.width * ZOOM) / 2;
	fdf->cam.offset_y = (HEIGHT - fdf->map.height * ZOOM) / 2;
	fdf->cam.depth = 20;
}

void	setup(t_fdf *fdf)
{
	cam_setup(fdf);

}
