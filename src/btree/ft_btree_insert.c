/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_insert.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:59:49 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 19:41:32 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

// Not finished
void	ft_btree_insert(t_btree **root, t_btree *ne, int (*cmp)(void *, void *))
{
	int		res;
	t_btree	*leaf;

	leaf = *root;
	if (!leaf)
	{
		*root = ne;
		return ;
	}
	res = cmp(leaf->content, ne->content);
	if (res < 0)
	{
		if (!leaf->left)
			leaf->left = ne;
		else
			ft_btree_insert(&leaf->left, ne, cmp);
	}
	else
	{
		if (!leaf->right)
			leaf->right = ne;
		else
			ft_btree_insert(&leaf->right, ne, cmp);
	}
}
