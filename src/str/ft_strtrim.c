/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 13:38:17 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 14:57:13 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static size_t	ft_pre_trim_size(const char *s, const char *set)
{
	size_t	len;

	len = 0;
	while (ft_isin_charset(*s, set))
	{
		len++;
		s++;
	}
	return (len);
}

static size_t	ft_post_trim_size(const char *s, const char *set)
{
	size_t	len;
	size_t	pos;

	len = 0;
	pos = ft_strlen(s) - 1;
	while (ft_isin_charset(s[pos], set) && pos)
	{
		len++;
		pos--;
	}
	return (len);
}

char	*ft_strtrim(const char *s, const char *set)
{
	char	*trim;
	size_t	pre;
	size_t	post;
	size_t	pos;
	size_t	len;

	pre = ft_pre_trim_size(s, set);
	post = ft_post_trim_size(s, set);
	len = ft_strlen(s) - pre + post;
	if (len < 0)
		len = 0;
	trim = (char *)malloc(sizeof(char) * (len + 1));
	if (!trim)
		return (NULL);
	pos = 0;
	while (pos < len)
	{
		trim[pos] = s[pos + pre];
		pos++;
	}
	trim[pos] = 0;
	return (trim);
}
