/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:27:37 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/23 13:37:46 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstadd_back(t_list **lst, t_list *ne)
{
	t_list	*memb;

	if (!lst)
		return (NULL);
	memb = *lst;
	if (!memb)
	{
		*lst = ne;
		return (memb);
	}
	ft_lstlast(memb)->next = ne;
	return (memb);
}
