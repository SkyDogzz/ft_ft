/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:28:32 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 19:41:17 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/btree.h"

void	free_data(void *content)
{
	(void) content;
}

void	print_data(void *content)
{
	int	*data;

	data = (int *)content;
	printf("%d ", *data);
}

int	cmp(void *leaf, void *new)
{
	int	*i_leaf;
	int	*i_new;

	i_leaf = (int *)leaf;
	i_new = (int *)new;
	return (*i_leaf - *i_new);
}

int	main(void)
{
	t_btree	*root;
	int		data[7];

	root = NULL;
	data[0] = 1;
	data[1] = 2;
	data[2] = 3;
	data[3] = 4;
	data[4] = 5;
	data[5] = 6;
	root = ft_btree_new(&data[0]);
	root->left = ft_btree_new(&data[1]);
	root->right = ft_btree_new(&data[2]);
	root->left->left = ft_btree_new(&data[3]);
	root->left->right = ft_btree_new(&data[4]);
	root->right->right = ft_btree_new(&data[5]);
	printf("Inorder print: expected 4 2 5 1 3 6\n");
	ft_btree_inorder(root, print_data);
	printf("\n");
	printf("Preorder print: expected 1 2 4 5 3 6\n");
	ft_btree_preorder(root, print_data);
	printf("\n");
	printf("Postorder print: expected 4 5 2 6 3 1\n");
	ft_btree_postorder(root, print_data);
	printf("\n");
	printf("Expected size = 6, got %d\n", ft_btree_size(root));
	printf("Expected height = 3, got %d\n", ft_btree_height(root));
	data[6] = 7;
	root->left->left->right = ft_btree_new(&data[6]);
	printf("Expected size = 7, got %d\n", ft_btree_size(root));
	printf("Expected height = 4, got %d\n", ft_btree_height(root));
	ft_btree_clear(&root, free_data);
	root = NULL;
	ft_btree_insert(&root, ft_btree_new(&data[0]), cmp);
	ft_btree_insert(&root, ft_btree_new(&data[1]), cmp);
	ft_btree_insert(&root, ft_btree_new(&data[4]), cmp);
	ft_btree_insert(&root, ft_btree_new(&data[5]), cmp);
	ft_btree_insert(&root, ft_btree_new(&data[2]), cmp);
	ft_btree_insert(&root, ft_btree_new(&data[3]), cmp);
	printf("Inorder print: expected pouet\n");
	ft_btree_inorder(root, print_data);
	printf("\n");
	ft_btree_clear(&root, free_data);
}
