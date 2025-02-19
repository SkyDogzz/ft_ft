/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:27:35 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/19 20:27:35 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstadd_front(t_list **lst, t_list *ne)
{
	t_list	*memb;

	if (!lst)
		return (NULL);
	memb = *lst;
	ne->next = memb;
	return (ne);
}
