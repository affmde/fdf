/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:43:16 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/04 18:20:43 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

t_pos	transform(t_pos pos, t_fdf *fdf)
{
	pos.y *= fdf->cam->zoom;
	pos.x *= fdf->cam->zoom;
	pos.z *= (fdf->cam->zoom / fdf->cam->depth);
	pos.y -= (fdf->map->height * fdf->cam->zoom) / 2;
	pos.x -= (fdf->map->width * fdf->cam->zoom) / 2;
	isometric(&pos);
	pos.x += WIDTH / 2;
	pos.y += HEIGHT / 2;
	return (pos);
}
