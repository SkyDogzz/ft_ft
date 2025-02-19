/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:54:23 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 17:57:31 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup(const char *s)
{
	char	*dup;
	size_t	size;
	size_t	pos;

	size = ft_strlen(s) + 1;
	dup = (char *)malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);
	pos = 0;
	while (pos < size)
	{
		dup[pos] = s[pos];
		pos++;
	}
	return (dup);
}
