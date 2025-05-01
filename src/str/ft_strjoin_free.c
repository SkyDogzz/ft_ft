/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin_free.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:40:18 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/01 13:52:31 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strjoin_free(char *s1, char *s2)
{
	char	*joined;
	size_t	len;
	size_t	pos;

	len = ft_strlen(s1) + ft_strlen(s2);
	joined = (char *)malloc(sizeof(char) * (len + 1));
	if (!joined)
		return (NULL);
	pos = 0;
	while (*s1)
	{
		joined[pos++] = *s1;
		s1++;
	}
	while (*s2)
	{
		joined[pos++] = *s2;
		s2++;
	}
	joined[pos] = 0;
	free(s1);
	free(s2);
	return (joined);
}
