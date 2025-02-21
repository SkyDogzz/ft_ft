/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:26:55 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 20:34:23 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/char.h"

static void	compare_is_something(int lower, int upper, int (*libc)(int c),
			int (*libft)(int c))
{
	int	error;

	error = 0;
	while (lower < upper)
	{
		if ((libc(lower) && 1) != (libft(lower) && 1))
		{
			printf(RED "Problem for test %d\n" CRESET, lower);
			error = 1;
		}
		lower++;
	}
	if (!error)
		printf(GRN "Works well\n" CRESET);
}

static void	compare_to_something(int lower, int upper, int (*libc)(int c),
			int (*libft)(int c))
{
	int	error;

	error = 0;
	while (lower < upper)
	{
		if ((libc(lower)) != (libft(lower)))
		{
			printf(RED "Problem for test %d\n" CRESET, lower);
			error = 1;
		}
		lower++;
	}
	if (!error)
		printf(GRN "Works well\n" CRESET);
}

int	main(void)
{
	printf(BLU "Testing function ft_isalnum\n" CRESET);
	compare_is_something(-128, 256, isalnum, ft_isalnum);
	printf(BLU "Testing function ft_isalpha\n" CRESET);
	compare_is_something(-128, 256, isalpha, ft_isalpha);
	printf(BLU "Testing function ft_isascii\n" CRESET);
	compare_is_something(-128, 256, isascii, ft_isascii);
	printf(BLU "Testing function ft_isdigit\n" CRESET);
	compare_is_something(-128, 256, isdigit, ft_isdigit);
	printf(BLU "Testing function ft_islower\n" CRESET);
	compare_is_something(-128, 256, islower, ft_islower);
	printf(BLU "Testing function ft_isprint\n" CRESET);
	compare_is_something(-128, 256, isprint, ft_isprint);
	printf(BLU "Testing function ft_isspace\n" CRESET);
	compare_is_something(-128, 256, isspace, ft_isspace);
	printf(BLU "Testing function ft_isupper\n" CRESET);
	compare_is_something(-128, 256, isupper, ft_isupper);
	printf(BLU "Testing function ft_tolower\n" CRESET);
	compare_to_something(0, 256, tolower, ft_tolower);
	printf(BLU "Testing function ft_toupper\n" CRESET);
	compare_to_something(0, 256, toupper, ft_toupper);
}
