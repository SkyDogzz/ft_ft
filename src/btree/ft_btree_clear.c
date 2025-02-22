/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_clear.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:13:39 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/22 13:27:34 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_btree_clear(t_btree **root, void (*del)(void *))
{
	t_btree	*leaf;

	leaf = *root;
	if (!leaf)
		return ;
	if (leaf->left)
		ft_btree_clear(&leaf->left, del);
	if (leaf->right)
		ft_btree_clear(&leaf->right, del);
	del(leaf->content);
	free(leaf);
	*root = NULL;
}
