/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:16:37 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 17:19:33 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*p_dst;
	unsigned char	*p_src;
	size_t			pos;

	p_dst = (unsigned char *)dst;
	p_src = (unsigned char *)src;
	pos = 0;
	while (pos < n)
	{
		p_dst[pos] = p_src[pos];
		pos++;
	}
	return (dst);
}
