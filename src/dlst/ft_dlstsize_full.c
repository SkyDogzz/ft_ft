/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dlstsize_full.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/20 16:00:16 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/20 16:01:15 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_dlstsize_full(t_dlist *dlst)
{
	size_t	len;

	if (!dlst)
		return (0);
	dlst = ft_dlstfirst(dlst);
	len = 0;
	while (dlst->next)
	{
		dlst = dlst->next;
		len++;
	}
	return (len);
}
