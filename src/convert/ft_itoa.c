/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 18:56:40 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 18:56:41 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static size_t	ft_int_len(int n)
{
	size_t	len;

	if (n == 0)
		return (1);
	len = 0;
	if (n < 0)
		len++;
	while (n != 0)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*nbr;
	size_t	len;

	if (n == INT_MIN)
	{
		nbr = ft_strdup("-2147483648");
		if (!nbr)
			return (NULL);
		return (nbr);
	}
	len = ft_int_len(n);
	nbr = (char *)malloc(sizeof(char) * (len + 1));
	if (!nbr)
		return (NULL);
	if (n < 0)
		nbr[0] = '-';
	nbr[len] = 0;
	while (len--)
	{
		nbr[len] = n % 10 + '0';
		n /= 10;
	}
	return (nbr);
}
