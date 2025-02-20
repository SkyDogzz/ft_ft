/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:29:09 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 15:05:12 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_memoverlap(void *p1, void *p2, size_t n)
{
	unsigned long long	p1c;
	unsigned long long	p2c;

	p1c = (unsigned long long)p1;
	p2c = (unsigned long long)p2;
	if (p1c < p2c && p1c + sizeof(char) * n > p2c)
		return (1);
	else if (p2c < p1c && p2c + sizeof(char) * n > p1c)
		return (-1);
	return (0);
}

static void	*ft_memcpyrev(void *dst, const void *src, size_t n)
{
	const unsigned char	*srcuc;
	unsigned char		*dstuc;

	dstuc = (unsigned char *) dst;
	srcuc = (unsigned char *) src;
	while (n > 0)
	{
		dstuc[n - 1] = srcuc[n - 1];
		n--;
	}
	return (dst);
}

void	*ft_memmove(void *dst, const void *src, size_t	n)
{
	int	over;

	over = ft_memoverlap(dst, (void *) src, n);
	if (over == 0 || over == 1)
		ft_memcpy(dst, src, n);
	else
		ft_memcpyrev(dst, src, n);
	return (dst);
}
