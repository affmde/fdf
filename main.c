/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:08:40 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 18:17:26 by andrferr         ###   ########.fr       */
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
	if (!(map = (t_map *)malloc(sizeof(t_map))))
		error_malloc("Something happened while allocating memory.");
	if(!handle_file(argv, argc, map))
		error_malloc("Something happened while handling the file.");
	fdf->map = map;
	if(!setup(fdf))
		error_malloc("Something happened on steup.");
	if(!handle_window(fdf))
		error_malloc("Could not manage the window.");
	//free_map(map->grid);
	free(fdf->cam);
	free(fdf->win);
	free(fdf->ptr);
	free(fdf);
	return (0);
}
