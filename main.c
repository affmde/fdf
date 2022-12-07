/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:08:40 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/07 13:21:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"
#include "my_libft/libft.h"

int	main(int argv, char **argc)
{
	t_fdf	*fdf;
	t_map	*map;

	fdf = (t_fdf *)ft_calloc(1, sizeof(t_fdf));
	if (!fdf)
		error_malloc("Something happened while allocating memory.");
	map = handle_file(argv, argc);
	if (!map)
	{
		clean_all(fdf, map);
		error_malloc("Something happened while handling the file.");
	}
	fdf->map = map;
	if (!setup(fdf))
	{
		clean_all(fdf, map);
		error_malloc("Something happened on steup.");
	}
	if (!handle_window(fdf))
		error_malloc("Could not manage the window.");
	clean_all(fdf, map);
	return (0);
}
