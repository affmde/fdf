/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 21:07:55 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 12:39:59 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

void	clean_all(t_fdf *fdf, t_map *map)
{
	free(fdf->cam);
	free_map(map->grid, map->height);
	free(map);
	free(fdf->ptr);
	free(fdf);
}
