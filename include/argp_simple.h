/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   argp_simple.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:21:05 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:36:09 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARGP_SIMPLE_H
# define ARGP_SIMPLE_H

# include "libft.h"

typedef struct s_arg_str
{
	char	*key;
	char	*value;
}	t_arg_str;

typedef struct s_arg_bool
{
	char	*key;
	bool	value;
}	t_arg_bool;

typedef struct s_arg_int
{
	char	*key;
	int		value;
}	t_arg_int;

typedef enum e_arg_type
{
	ARG_STR,
	ARG_BOOL,
	ARG_INT
}	t_arg_type;

typedef union u_arg
{
	t_arg_str	as_str;
	t_arg_bool	as_bool;
	t_arg_int	as_int;
}	t_arg;

typedef struct s_arg
{
	t_arg_type	type;
	t_arg		value;
}	t_arg_container;

int				count_argp(int argc, char **argv);
t_arg_container	**parse_argp(int argc, char **argv);
void			free_argp(t_arg_container **argp);

#endif
