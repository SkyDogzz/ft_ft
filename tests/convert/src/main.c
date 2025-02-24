/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/23 13:47:19 by skydogzz          #+#    #+#             */
/*   Updated: 2025/02/24 23:49:44 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/convert.h"

void	test_atoi(const char *num, int (*libc)(const char *),
			int (*libft)(const char *))
{
	int	rlibc;
	int	rlibft;

	rlibc = libc(num);
	rlibft = libft(num);
	if (rlibc != rlibft)
		printf(RED "%s should give %d but gave %d\n" CRESET, num, rlibc,
			rlibft);
	else
		printf(GRN "%s should give %d and gave %d\n" CRESET, num, rlibc,
			rlibft);
}

int	main(void)
{
	test_atoi("Hello world 123", atoi, ft_atoi);
	test_atoi("123", atoi, ft_atoi);
	test_atoi("2147483647", atoi, ft_atoi);
	test_atoi("2147483648", atoi, ft_atoi);
	test_atoi("-2147483648", atoi, ft_atoi);
	test_atoi("-2147483649", atoi, ft_atoi);
	test_atoi("-123", atoi, ft_atoi);
	test_atoi("+123", atoi, ft_atoi);
	test_atoi("--123", atoi, ft_atoi);
	test_atoi("- 123", atoi, ft_atoi);
	test_atoi("+- 123", atoi, ft_atoi);
}
