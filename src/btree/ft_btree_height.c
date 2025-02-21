/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_btree_height.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:17:56 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 18:20:09 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

int	ft_btree_height(t_btree *root)
{
	int	height;
	int	left_height;
	int	right_height;

	height = 0;
	if (!root)
		return (height);
	height++;
	left_height = 0;
	if (root->left)
		left_height = ft_btree_height(root->left);
	right_height = 0;
	if (root->right)
		right_height += ft_btree_height(root->right);
	return (height + ft_max(left_height, right_height));
}
