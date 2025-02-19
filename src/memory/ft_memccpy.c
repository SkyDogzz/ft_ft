/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:23:03 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 20:17:50 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char		*p_dst;
	const unsigned char	*p_src;
	size_t				pos;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	pos = 0;
	while (pos < n && p_src[pos] != c)
	{
		p_dst[pos] = p_src[pos];
		pos++;
	}
	return (dst);
}
