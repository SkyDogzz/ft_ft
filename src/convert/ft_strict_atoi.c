/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strict_atoi.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:34:10 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:34:11 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

bool	strict_atoi(const char *s, int *result)
{
	long long	tmp;

	if (!strict_atoll(s, &tmp))
		return (false);
	if (tmp < INT_MIN || tmp > INT_MAX)
		return (false);
	*result = (int)tmp;
	return (true);
}
