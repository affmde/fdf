/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: andrferr <andrferr@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 10:59:50 by andrferr          #+#    #+#             */
/*   Updated: 2022/11/04 10:28:55 by andrferr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char					*a;
	size_t					i;

	i = 0;
	a = (char *)s;
	while (i < n)
	{
		if (a[i] == c)
			return (&a[i]);
		i++;
	}
	return (0);
}
