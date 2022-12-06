/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:16:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 14:39:16 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"

t_map	*handle_file(int argv, char **argc)
{
	int		fd;
	t_map	*map;

	if (argv != 2)
		return (NULL);
	fd = open(argc[1], O_RDONLY);
	if (fd == -1)
		return (NULL);
	map = get_map(fd);
	if (!map)
		return (NULL);
	close(fd);
	return (map);
}
