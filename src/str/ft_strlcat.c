/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:16:17 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 13:16:18 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

size_t	ft_strlcat(char *d, const char *s, size_t n)
{
	size_t	d_len;
	size_t	s_len;
	size_t	i;

	d_len = 0;
	while (d[d_len] && d_len < n)
		d_len++;
	s_len = 0;
	while (s[s_len])
		s_len++;
	if (n <= d_len)
		return (n + s_len);
	i = 0;
	while (s[i] && (d_len + i) < (n - 1))
	{
		d[d_len + i] = s[i];
		i++;
	}
	d[d_len + i] = '\0';
	return (d_len + s_len);
}
