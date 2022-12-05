/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   generate_map_array.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/25 15:50:55 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 08:59:33 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

static char	*get_map_str(int fd)
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

static void	fill_array(int *i, char **line, int **grid, t_map *map)
{
	int		j;
	char	*val;
	
	j = 0;
	while (line[j])
	{
		val = line[j];
		grid[*i][j] = ft_atoi(val);
		set_z(map, grid[*i][j]);
		free(line[j]);
		j++;
	}
	free(line);
}

int	**int_map(char **char_map, t_map *map)
{
	int	**grid;
	int	i;
	char	**line;
	
	map->max_z = 0;
	map->min_z = 0;
	map->height = map_length(char_map);
	if (!(grid = (int**)malloc(sizeof(int *) * map->height)))
		return (NULL);
	i = 0;
	while (char_map[i])
	{
		line = ft_split(char_map[i], ' ');
		map->width = map_length(line);
		if (!(grid[i] = (int *)malloc(sizeof(int) * map->width)))
			return (NULL);
		fill_array(&i, line, grid, map);
		i++;
	}
	return (grid);
}

t_map	*get_map(int fd)
{
	char	*map_str;
	char	**char_map;
	t_map	*map;
	
	if(!(map_str = get_map_str(fd)))
		return (0);
	char_map = ft_split(map_str, '\n');
	if (!(map = (t_map *)malloc(sizeof(t_map))))
	{
		free(map_str);
		free_char_map(char_map);
		return (0);
	}
	map->grid = int_map(char_map, map);
	free_char_map(char_map);
	free(map_str);
	return (map);
}
