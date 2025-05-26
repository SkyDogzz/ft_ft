/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:36:54 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:36:55 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/argp_simple.h"

void	free_argp(t_arg_container **argp)
{
	int	i;

	i = 0;
	while (argp[i])
	{
		if (argp[i]->type == ARG_STR)
		{
			free(argp[i]->value.as_str.value);
			free(argp[i]->value.as_str.key);
		}
		else if (argp[i]->type == ARG_INT)
			free(argp[i]->value.as_int.key);
		else if (argp[i]->type == ARG_BOOL)
			free(argp[i]->value.as_bool.key);
		free(argp[i]);
		i++;
	}
	free(argp);
}
