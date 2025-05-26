/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:36:47 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:36:48 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/argp_simple.h"

int	count_argp(int argc, char **argv)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			count++;
		i++;
	}
	return (count);
}
