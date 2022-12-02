/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   transform.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:43:16 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/02 14:23:17 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

t_pos	transform(t_pos pos, t_fdf *fdf)
{
	fdf->cam.zoom = ZOOM;
	printf("cam zoom: %d\n", fdf->cam.zoom);
	// fdf->cam.depth = 20;
	// fdf->cam.offset = 1;
	// pos.y *= fdf->cam.zoom;
	// pos.x *= fdf->cam.zoom;
	printf("%d - %d\n", pos.y, pos.x);
	//pos.z *= fdf->cam.zoom / fdf->cam.depth;
	//isometric(&pos);
	// pos.x += HEIGHT / 2 + fdf->cam.offset;
	// pos.y += WIDTH / 2 + fdf->cam.offset;
	return (pos);
}
