/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:43:16 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 10:57:41 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_pos	transform(t_pos pos, t_fdf *fdf)
{
	pos.y *= fdf->cam->zoom;
	pos.x *= fdf->cam->zoom;
	pos.z *= (fdf->cam->zoom / fdf->cam->depth) + fdf->cam->z_transform;
	pos.y -= (fdf->map->height * fdf->cam->zoom) / 2 + fdf->cam->y_translation;
	pos.x -= (fdf->map->width * fdf->cam->zoom) / 2 + fdf->cam->x_translation;
	isometric(&pos);
	pos.y -= fdf->cam->y_translation;
	pos.x -= fdf->cam->x_translation;
	pos.x += WIDTH / 2;
	pos.y += HEIGHT / 2;
	return (pos);
}
