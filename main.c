/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:08:40 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 09:24:58 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"
#include "my_libft/libft.h"

int	main(int argv, char **argc)
{
	t_fdf	*fdf;
	t_map	*map;

	if (!(fdf = (t_fdf *)malloc(sizeof(t_fdf))))
		error_malloc("Something happened while allocating memory.");
	if(!(map = handle_file(argv, argc)))
		error_malloc("Something happened while handling the file.");
	fdf->map = map;
	if(!setup(fdf))
		error_malloc("Something happened on steup.");
	if(!handle_window(fdf))
		error_malloc("Could not manage the window.");
	free(fdf->cam);
	free_map(map->grid, fdf->map->height);
	free(map);
	free(fdf->ptr);
	free(fdf);
	return (0);
}
