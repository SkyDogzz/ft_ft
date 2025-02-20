/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:17:09 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 13:17:09 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcpy(char *d, const char *s, size_t n)
{
	size_t		len;
	const char	*s_start = s;

	len = 0;
	while (*s++)
		len++;
	s = s_start;
	if (n > 0)
	{
		while (*s && n > 1)
		{
			*d++ = *s++;
			n--;
		}
		*d = '\0';
	}
	return (len);
}
