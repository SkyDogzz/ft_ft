/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bitfields.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 15:52:28 by skydogzz          #+#    #+#             */
/*   Updated: 2025/05/01 15:56:41 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

bool	ft_bf_get(const void *field, uint8_t pos, size_t bit_count)
{
	uint8_t	*bytes;
	size_t	byte_idx;
	uint8_t	bit_idx;

	if (pos >= bit_count)
		return (false);
	bytes = (uint8_t *)field;
	byte_idx = pos / 8;
	bit_idx = pos % 8;
	return (((bytes[byte_idx] >> bit_idx) & 1) != 0);
}

void	ft_bf_set(void *field, uint8_t pos, size_t bit_count)
{
	uint8_t	*bytes;
	size_t	byte_idx;
	uint8_t	bit_idx;

	if (pos >= bit_count)
		return ;
	bytes = (uint8_t *)field;
	byte_idx = pos / 8;
	bit_idx = pos % 8;
	bytes[byte_idx] |= (1 << bit_idx);
}

void	ft_bf_clear(void *field, uint8_t pos, size_t bit_count)
{
	uint8_t	*bytes;
	size_t	byte_idx;
	uint8_t	bit_idx;

	if (pos >= bit_count)
		return ;
	bytes = (uint8_t *)field;
	byte_idx = pos / 8;
	bit_idx = pos % 8;
	bytes[byte_idx] &= ~(1 << bit_idx);
}

void	ft_bf_toggle(void *field, uint8_t pos, size_t bit_count)
{
	uint8_t	*bytes;
	size_t	byte_idx;
	uint8_t	bit_idx;

	if (pos >= bit_count)
		return ;
	bytes = (uint8_t *)field;
	byte_idx = pos / 8;
	bit_idx = pos % 8;
	bytes[byte_idx] ^= (1 << bit_idx);
}

uint8_t	ft_bf_count(const void *field, size_t bit_count)
{
	size_t		pos;
	uint8_t		total;

	total = 0;
	pos = 0;
	while (pos < bit_count)
	{
		if (ft_bf_get(field, pos, bit_count))
			total++;
		pos++;
	}
	return (total);
}
