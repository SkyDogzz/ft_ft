/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hashmap_new.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/22 20:28:23 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/22 20:31:17 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

t_hashmap	*ft_hashmap_new(void)
{
	t_hashmap	*new;

	new = (t_hashmap *)malloc(sizeof(t_hashmap));
	if (!new)
		return (NULL);
	new->buckets = (t_hashnode *)malloc(sizeof(t_hashnode) * MAX_BUCKETS);
	if (!new->buckets)
	{
		free(new);
		return (NULL);
	}
	new->size = MAX_BUCKETS;
	return (new);
}
