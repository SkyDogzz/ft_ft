/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:27:35 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/24 23:18:21 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstadd_front(t_list **lst, t_list *ne)
{
	if (!lst)
		return (NULL);
	ne->next = *lst;
	*lst = ne;
	return (ne);
}
