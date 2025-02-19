/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 17:51:45 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 17:53:30 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	pos;

	pos = ft_strlen(s);
	while (pos--)
	{
		if (s[pos] == c)
			return ((char *)&s[pos]);
	}
	return (NULL);
}
