/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   structs.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 10:51:55 by andrferr          #+#    #+#             */
/*   Updated: 2022/12/06 13:23:13 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef STRUCTS_H
# define STRUCTS_H

typedef struct s_cam
{
	int	zoom;
	int	offset_x;
	int	offset_y;
	int	depth;
	int	color;
	int	z_transform;
	int	x_translation;
	int	y_translation;
}			t_cam;

typedef struct s_map
{
	int	**grid;
	int	height;
	int	width;
	int	max_z;
	int	min_z;
}			t_map;

typedef struct s_img
{
	void		*img_ptr;
	int			*data;
	int			size_l;
	int			bpp;
	int			endian;
}				t_img;

typedef struct s_position
{
	int	x;
	int	y;
	int	z;
	int	color;
}	t_pos;

typedef struct s_line_params
{
	int	sx;
	int	sy;
	int	dx;
	int	dy;
	int	error;
	int	offset;
}		t_params;

typedef struct s_fdf
{
	void	*ptr;
	void	*win;
	int		error_code;
	t_map	*map;
	t_cam	*cam;
	t_img	*image;
}				t_fdf;

#endif
