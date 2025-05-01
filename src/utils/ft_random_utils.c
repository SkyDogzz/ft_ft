/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_random_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 14:10:27 by skydogzz          #+#    #+#             */
/*   Updated: 2025/05/01 14:39:17 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_random_bytes(void *buf, size_t size)
{
	int		fd;
	ssize_t	ret;

	fd = open("/dev/urandom", O_RDONLY);
	if (fd < 0)
	{
		perror("open /dev/urandom");
		return (-1);
	}
	ret = read(fd, buf, size);
	if (ret < 0 || (size_t)ret != size)
	{
		perror("read /dev/urandom");
		close(fd);
		return (-1);
	}
	close(fd);
	return (0);
}

uint8_t	ft_random_8(void)
{
	uint8_t	val;

	val = 0;
	if (ft_random_bytes(&val, sizeof(val)) < 0)
		return (0);
	return (val);
}

uint16_t	ft_random_16(void)
{
	uint16_t	val;

	val = 0;
	if (ft_random_bytes(&val, sizeof(val)) < 0)
		return (0);
	return (val);
}

uint32_t	ft_random_32(void)
{
	uint32_t	val;

	val = 0;
	if (ft_random_bytes(&val, sizeof(val)) < 0)
		return (0);
	return (val);
}

uint64_t	ft_random_64(void)
{
	uint64_t	val;

	val = 0;
	if (ft_random_bytes(&val, sizeof(val)) < 0)
		return (0);
	return (val);
}
