/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_power.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:19:12 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 19:21:07 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_power(int n, int exp)
{
	int	power;

	if (exp < 0)
		return (0);
	power = 1;
	while (exp--)
		power *= n;
	return (power);
}
