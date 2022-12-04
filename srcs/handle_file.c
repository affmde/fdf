/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   handle_file.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 15:16:09 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/04 10:35:03 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fdf.h"
#include "../my_libft/libft.h"

t_map	*handle_file(int argv, char **argc)
{
	int fd;
	t_map	*map;
	
	if (argv != 2)
		return (NULL);
	if((fd = open(argc[1], O_RDONLY)) == -1)
		return (NULL);
	if (!(map = get_map(fd)))
		return (NULL);
	close(fd);
	return (map);
}
