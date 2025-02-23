/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:17:56 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/23 13:35:03 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_btree_height(t_btree *root)
{
	int	left_height;
	int	right_height;

	if (!root)
		return (0);
	if (root->left)
		left_height = ft_btree_height(root->left);
	if (root->right)
		right_height = ft_btree_height(root->right);
	return (1 + ft_max(left_height, right_height));
}
