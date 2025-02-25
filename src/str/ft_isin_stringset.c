/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isin_stringset.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:44:52 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/25 14:46:02 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

bool	ft_isin_stringset(const char *s, const char *set, const char delim)
{
	char	**strings;
	size_t	pos;

	strings = ft_split(set, delim);
	if (!strings)
		return (false);
	pos = 0;
	while (strings[pos])
	{
		if (ft_strcmp(s, strings[pos]) == 0)
		{
			ft_freetab(strings);
			return (true);
		}
		pos++;
	}
	ft_freetab(strings);
	return (false);
}
