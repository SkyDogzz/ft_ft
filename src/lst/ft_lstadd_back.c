/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 20:27:37 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/24 23:20:33 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_list	*ft_lstadd_back(t_list **lst, t_list *ne)
{
	t_list	*head;

	if (!lst)
		return (NULL);
	if (*lst == NULL)
	{
		*lst = ne;
		return (*lst);
	}
	head = *lst;
	ft_lstlast(head)->next = ne;
	return (head);
}
