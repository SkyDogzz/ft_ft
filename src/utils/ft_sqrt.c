/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:17:19 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 19:18:55 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_sqrt(int n)
{
	int	sqrt;

	if (n < 0)
		return (0);
	sqrt = 0;
	while (sqrt * sqrt < n)
		sqrt++;
	if (sqrt * sqrt == n)
		return (sqrt);
	return (0);
}
