/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:07:55 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:56:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

void	clean_all(t_fdf *fdf, t_map *map)
{
	if (fdf->cam)
		free(fdf->cam);
	if (fdf->map)
		free_map(map->grid, map->height);
	if (map)
		free(map);
	if (fdf->ptr)
		free(fdf->ptr);
	if (fdf)
		free(fdf);
}
