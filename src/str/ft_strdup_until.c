/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup_until.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:33:48 by tstephan          #+#    #+#             */
/*   Updated: 2025/05/26 16:33:49 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strdup_until(const char *str, char c)
{
	int		size;
	char	*dup;

	size = 0;
	while (str[size] && str[size] != c)
		size++;
	dup = ft_strndup(str, size);
	return (dup);
}
