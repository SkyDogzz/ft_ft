/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/19 02:32:18 by skydogzz          #+#    #+#             */
/*   Updated: 2025/02/19 02:50:27 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

/** 
 * \fn size_t ft_strlen(const char *s)
 * \brief Calcule la longueur d'une chaîne de caractères.
 *
 * Cette fonction retourne le nombre de caractères présents dans la chaîne,
 * sans compter le caractère nul de fin.
 *
 * \param s La chaîne dont on veut calculer la longueur.
 * \return La longueur de la chaîne.
 */
size_t	ft_strlen(const char *s)
{
	size_t	size;

	size = 0;
	while (s[size])
		size++;
	return (size);
}
