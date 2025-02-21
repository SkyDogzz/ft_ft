/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_preorder.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:40:48 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 18:46:16 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

void	ft_btree_preorder(t_btree *root, void (*f)(void *))
{
	if (!root)
		return ;
	f(root->content);
	if (root->left)
		ft_btree_preorder(root->left, f);
	if (root->right)
		ft_btree_preorder(root->right, f);
}
