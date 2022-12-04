/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:08:40 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/04 18:19:13 by andrferr         ###   ########.fr       */
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
	//free_map(fdf->map->grid);
	if(!handle_window(fdf))
		error_malloc("Could not manage the window.");
	return (0);
}
