/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power_of.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 13:44:58 by andrferr          #+#    #+#             */
/*   Updated: 2022/11/15 13:45:04 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_power_of(int num, int power)
{
	int	i;
	int	res;

	i = 0;
	res = 1;
	while (i++ < power)
		res *= num;
	return (res);
}
