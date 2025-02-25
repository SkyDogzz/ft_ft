/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isin_charset.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:38:38 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/25 14:45:28 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

bool	ft_isin_charset(const char c, const char *set)
{
	while (*set)
	{
		if (c == *set)
			return (true);
		set++;
	}
	return (false);
}
