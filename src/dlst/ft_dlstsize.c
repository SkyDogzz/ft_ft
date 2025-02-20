/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 15:58:14 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 16:00:06 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_dlstsize(t_dlist *dlst)
{
	size_t	len;

	if (!dlst)
		return (0);
	len = 0;
	while (dlst->next)
	{
		dlst = dlst->next;
		len++;
	}
	return (len);
}
