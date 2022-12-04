/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   colors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/04 18:51:30 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/04 19:07:49 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../my_libft/libft.h"
#include "../includes/fdf.h"

int color(t_fdf *fdf, int z)
{
    int range;

    range = fdf->map->max_z - fdf->map->min_z;
    if (z < range * 0.2)
        return (0x00FF00);
    else if(z < range * 0.4)
        return (0x80FF00);
    else if(z < range * 0.6)
        return (0xFFFF00);
    else if(z < range * 0.8)
        return (0xFF8000);
    else
        return (0xFF0000);
}