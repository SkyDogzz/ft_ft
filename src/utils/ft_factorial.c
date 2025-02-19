/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_factorial.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 19:21:29 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 19:24:48 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_factorial(int n)
{
	int	factorial;

	if (n <= 0 || n > 12)
		return (0);
	factorial = 1;
	while (n)
		factorial *= n--;
	return (factorial);
}
