/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:21:45 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 18:33:41 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_atoi(const char *str)
{
	int	nbr;
	int	mult;

	nbr = 0;
	mult = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
	{
		mult = -1;
		str++;
	}
	while (ft_isdigit(*str))
	{
		nbr *= 10;
		nbr += *str - '0';
		str++;
	}
	return (mult * nbr);
}
