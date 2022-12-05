/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_map.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/30 12:02:25 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/05 13:23:10 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

void	free_map(int **map, int heigth)
{
	int	i;

	i = 0;
	while (i < heigth)
	{
		free(map[i]);
		i++;
	}
	free(map);
}
