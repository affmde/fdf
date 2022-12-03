/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 14:08:40 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 12:43:35 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fdf.h"
#include "my_libft/libft.h"

int	main(int argv, char **argc)
{
	t_fdf	fdf;
	t_map	map;

	if(!handle_file(argv, argc, &map))
		return (0);
	
	fdf.map = &map;
	if(!setup(&fdf))
		return (0);
	if(!handle_window(&fdf))
		return (0);
	free(fdf.ptr);
	free_map(&map);

	return (0);
}
