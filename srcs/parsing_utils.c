/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:23:21 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:44:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

char	*get_map_str_helper(char *old, char *new)
{
	char	*tmp;

	tmp = ft_strjoin(old, new);
	free(old);
	free(new);
	return (tmp);
}

void	set_z(t_map *map, int val)
{
	if (val > map->max_z)
		map->max_z = val;
	if (val < map->min_z)
		map->min_z = val;
}

int	map_length(char **map)
{
	int	i;

	i = 0;
	while (map[i])
		i++;
	return (i);
}

void	free_char_map(char **char_map)
{
	int	i;

	i = 0;
	while (char_map[i])
	{
		free(char_map[i]);
		i++;
	}
	free(char_map);
}
