/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fdf.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 11:16:59 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/03 17:52:25 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FDF_H
# define FDF_H

# define ZOOM 40
# define HEIGHT 1000
# define WIDTH 1000

# include <stdio.h>
# include <fcntl.h>
# include <unistd.h>
# include <mlx.h>
# include <math.h>
# include "structs.h"


int		get_map(int fd, t_map *map);
void	draw(t_fdf *fdf, t_img *image);
int		deal_key(int keycode, t_fdf *fdf);
int		close_window(t_fdf *fdf);
int		isometric(t_pos *pos);
void	free_map(int **map);
int		handle_window(t_fdf *fdf);
int		handle_file(int argv, char **argc, t_map *map);
int		handle_img(t_fdf *fdf, t_img *image);
void	bresenham_algo(t_pos pos_0, t_pos pos_1, t_img *image);
t_pos	transform(t_pos pos, t_fdf *fdf);
int 	setup(t_fdf *fdf);
void	my_put_pixel(t_img *image, int x, int y, int color);
void    error_malloc(char *s);

#endif
