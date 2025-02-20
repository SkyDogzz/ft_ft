/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:56:07 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 14:56:07 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	pos;

	sub = (char *)malloc(sizeof(char) * (len + 1));
	if (!sub)
		return (NULL);
	pos = 0;
	while (s[start + pos] && pos < len)
	{
		sub[pos] = s[start + pos];
		pos++;
	}
	sub[pos] = 0;
	return (sub);
}
