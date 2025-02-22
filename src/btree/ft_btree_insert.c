/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:59:49 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/22 13:31:06 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_btree_insert(t_btree **root, t_btree *new,
			int (*cmp)(void *, void *))
{
	if (!root || !new)
		return ;
	if (!*root)
	{
		*root = new;
		return ;
	}
	if (cmp(new->content, (*root)->content) < 0)
		ft_btree_insert(&(*root)->left, new, cmp);
	else
		ft_btree_insert(&(*root)->right, new, cmp);
}
