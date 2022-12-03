/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:50:55 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 17:25:19 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

char	*get_map_str_helper(char *old, char *new)
{
	char *tmp;

	tmp = ft_strjoin(old, new);
	free(old);
	free(new);
	return (tmp);
}

char	*get_map_str(int fd)
{
	char	*map;
	char	*str;

	map = ft_calloc(1, sizeof(char));
	if (!map)
		return (NULL);
	while((str = get_next_line(fd)))
		map = get_map_str_helper(map, str);
	return (map);
}

int	**int_map(char **char_map, t_map *map)
{
	int	**grid;
	int	i;
	int	j;
	int k;

	i = 0;
	while(char_map[i])
		i++;
	if(!(grid = (int **)malloc(sizeof(int *) * i)))
		return (NULL);
	i = 0;
	while(char_map[i])
	{
		if (!(grid[i] = (int *)malloc(sizeof(int) * ft_strlen(char_map[i]))))
			return (NULL);
		j = 0;
		k = 0;
		while(char_map[i][k] != '\0')
		{
			if(ft_isdigit(char_map[i][k]) || char_map[i][k] == '-' || char_map[i][k] == '+')
			{
				grid[i][j] = ft_atoi(&char_map[i][k]);
				if(grid[i][j])
					k++;
				j++;
			}
			k++;
		}
		free(char_map[i]);
		map->width = j;
		i++;
	}
	map->height = i;
	return (grid);
}

int	get_map(int fd, t_map *map)
{
	char	*map_str;
	char	**char_map;
	if(!(map_str = get_map_str(fd)))
		return (0);
	char_map = ft_split(map_str, '\n');
	map->grid = int_map(char_map, map);
	free(char_map);
	free(map_str);
	return (1);
}
