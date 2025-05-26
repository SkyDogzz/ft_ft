/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:14:24 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:44:24 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/argp_simple.h"

static void	fill_argp_int(char *arg, t_arg_container **argp, int *j, int nbr)
{
	argp[*j] = (t_arg_container *)malloc(sizeof(t_arg_container));
	if (!argp[*j])
		return ; 
	argp[*j]->type = ARG_INT;
	argp[*j]->value.as_int.key = ft_strdup_until(arg, '=');
	argp[*j]->value.as_int.value = nbr;
	(*j)++;
}

static void	fill_argp_str(char *arg, t_arg_container **argp, int *j, char *eq)
{
	argp[*j] = (t_arg_container *)malloc(sizeof(t_arg_container));
	if (!argp[*j])
		return ; 
	argp[*j]->type = ARG_STR;
	argp[*j]->value.as_str.key = ft_strdup_until(arg, '=');
	if (eq)
		argp[*j]->value.as_str.value = ft_strdup(eq + 1);
	else
		argp[*j]->value.as_str.value = ft_strdup("");
	(*j)++;
}

static void	fill_argp_bool(char *arg, t_arg_container **argp, int *j)
{
	argp[*j] = (t_arg_container *)malloc(sizeof(t_arg_container));
	if (!argp[*j])
		return ; 
	argp[*j]->type = ARG_BOOL;
	argp[*j]->value.as_bool.key = ft_strdup(arg);
	argp[*j]->value.as_bool.value = true;
	(*j)++;
}

static void	handle_arg(char *arg, t_arg_container **argp, int *j)
{
	char	*eq;
	int		nbr;

	if (arg[1] == '-' && ft_strchr(arg, '='))
	{
		eq = ft_strchr(arg, '=');
		if (eq && strict_atoi(eq + 1, &nbr))
			fill_argp_int(arg, argp, j, nbr);
		else
			fill_argp_str(arg, argp, j, eq);
	}
	else if (!ft_strchr(arg, '='))
		fill_argp_bool(arg, argp, j);
}

t_arg_container	**parse_argp(int argc, char **argv)
{
	int				i;
	int				j;
	int				count;
	t_arg_container	**argp;

	count = count_argp(argc, argv);
	argp = (t_arg_container **)malloc(sizeof(t_arg_container *) * (count + 1));
	if (!argp)
		return (NULL);
	argp[count] = NULL;
	i = 0;
	j = 0;
	while (i < argc)
	{
		if (argv[i][0] == '-')
			handle_arg(argv[i], argp, &j);
		i++;
	}
	return (argp);
}
