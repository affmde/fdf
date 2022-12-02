/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:16:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/11/30 15:21:27 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#include "../my_libft/libft.h"

int	handle_file(int argv, char **argc, t_map *map)
{
	int fd;

	if (argv != 2)
		return (0);
	if((fd = open(argc[1], O_RDONLY)) == -1)
		return (0);
	if (!get_map(fd, map))
		return (0);
	close(fd);
	return (1);
}
