/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 14:47:49 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 14:49:23 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_strcmp(const char *s1, const char *s2)
{
	size_t	len;

	len = ft_max(ft_strlen(s1), ft_strlen(s2));
	return (ft_strncmp(s1, s2, len));
}
