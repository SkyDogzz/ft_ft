/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   .main.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 18:28:32 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/23 13:49:15 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/btree.h"

void	free_data(void *content)
{
	(void)content;
}

void	print_data(void *content)
{
	const int	*data;

	data = (int *)content;
	printf("%d ", *data);
}

int	cmp(void *a, void *b)
{
	const int	*ia; 
	const int	*ib; 

	ia = (int *)a;
	ib = (int *)b;
	return (*ia - *ib);
}

int	main(void)
{
	t_btree	*root;
	int		n;

	root = NULL;
	/* --- Test 1 : Insertion via ft_btree_insert avec un tableau d'entiers plus grand --- */
	printf("=== Test 1 : Insertion par ft_btree_insert ===\n");
	int arr1[] = {50, 30, 20, 40, 70, 60, 80, 10, 35, 65, 55, 75};
	n = sizeof(arr1) / sizeof(arr1[0]);

	// Insertion des éléments dans l'arbre (l'ordre d'insertion n'étant pas trié,
	// ft_btree_insert doit placer les noeuds correctement selon cmp).
	for (int i = 0; i < n; i++)
	{
		t_btree	*new_node = ft_btree_new(&arr1[i]);
		ft_btree_insert(&root, new_node, cmp);
	}
	printf("Inorder (devrait être trié) : ");
	ft_btree_inorder(root, print_data);
	printf("\nPreorder : ");
	ft_btree_preorder(root, print_data);
	printf("\nPostorder : ");
	ft_btree_postorder(root, print_data);
	printf("\nTaille de l'arbre : %d\n", ft_btree_size(root));
	printf("Hauteur de l'arbre : %d\n", ft_btree_height(root));

	// Libération de l'arbre
	ft_btree_clear(&root, free_data);


	/* --- Test 2 : Construction manuelle d'un arbre plus complexe --- */
	printf("\n=== Test 2 : Construction manuelle d'un arbre ===\n");
	/*// Arbre construit manuellement :*/
	/*//*/
	/*//                25*/
	/*//               /  \*/
	/*//             15    50*/
	/*//            /  \   / \*/
	/*//          10   22 35  70*/
	/*//               /     /  \*/
	/*//             18     60   80*/
	/*//                         /*/
	/*//                       65*/
	int arr2[] = {25, 15, 50, 10, 22, 35, 70, 18, 60, 80, 65};
	t_btree	*nodes[11];
	n = sizeof(arr2) / sizeof(arr2[0]);

	// Création des noeuds
	for (int i = 0; i < n; i++)
		nodes[i] = ft_btree_new(&arr2[i]);

	// Lier manuellement les noeuds pour obtenir la structure souhaitée
	// Racine
	nodes[0]->left = nodes[1];   // 25 -> gauche = 15
	nodes[0]->right = nodes[2];  // 25 -> droite = 50
	// Sous-arbre gauche
	nodes[1]->left = nodes[3];   // 15 -> gauche = 10
	nodes[1]->right = nodes[4];  // 15 -> droite = 22
	nodes[4]->left = nodes[7];   // 22 -> gauche = 18
	// Sous-arbre droit
	nodes[2]->left = nodes[5];   // 50 -> gauche = 35
	nodes[2]->right = nodes[6];  // 50 -> droite = 70
	nodes[6]->left = nodes[8];   // 70 -> gauche = 60
	nodes[6]->right = nodes[9];  // 70 -> droite = 80
	nodes[9]->left = nodes[10];  // 80 -> gauche = 65

	root = nodes[0];  // La racine de l'arbre est le noeud contenant 25

	printf("Inorder (devrait être trié) : ");
	ft_btree_inorder(root, print_data);
	printf("\nPreorder : ");
	ft_btree_preorder(root, print_data);
	printf("\nPostorder : ");
	ft_btree_postorder(root, print_data);
	printf("\nTaille de l'arbre : %d\n", ft_btree_size(root));
	printf("Hauteur de l'arbre : %d\n", ft_btree_height(root));

	ft_btree_clear(&root, free_data);

	return (0);
}
