/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:26:55 by tstephan          #+#    #+#             */
/*	 Updated: 2025/02/21 00:45:58 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/char.h"

void	compare_is_something(int lower, int upper, int (*libc)(int c),
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

int	main(void)
{
	printf("Testing function ft_isalnum\n");
	compare_is_something(-128, 256, isalnum, ft_isalnum);
	printf("Testing function ft_isalpha\n");
	compare_is_something(-128, 256, isalpha, ft_isalpha);
	printf("Testing function ft_isascii\n");
	compare_is_something(-128, 256, isascii, ft_isascii);
	printf("Testing function ft_isdigit\n");
	compare_is_something(-128, 256, isdigit, ft_isdigit);
	printf("Testing function ft_islower\n");
	compare_is_something(-128, 256, islower, ft_islower);
	printf("Testing function ft_isprint\n");
	compare_is_something(-128, 256, isprint, ft_isprint);
	printf("Testing function ft_isspace\n");
	compare_is_something(-128, 256, isspace, ft_isspace);
	printf("Testing function ft_isupper\n");
	compare_is_something(-128, 256, isupper, ft_isupper);
}
