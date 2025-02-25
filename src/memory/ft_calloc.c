/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:22:05 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/25 01:08:03 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total_size;
	unsigned char	*p;
	size_t			pos;

	if (count == 0 || size == 0)
	{
		p = (unsigned char *)malloc(1);
		if (!p)
			return (NULL);
		return (p);
	}
	total_size = count * size;
	if (total_size / count != size)
		return (NULL);
	p = (unsigned char *)malloc(total_size);
	if (!p)
		return (NULL);
	pos = 0;
	while (pos < total_size)
		p[pos++] = 0;
	return ((void *)p);
}
