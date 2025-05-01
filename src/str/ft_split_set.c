/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_set.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: skydogzz <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/01 13:53:54 by skydogzz          #+#    #+#             */
/*   Updated: 2025/05/01 14:01:06 by skydogzz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

static int	ft_countwords(const char *s, char *set)
{
	int	count;
	int	in_word;

	count = 0;
	in_word = 0;
	while (*s)
	{
		if (!ft_isin_charset(*s, set) && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (ft_isin_charset(*s, set))
			in_word = 0;
		s++;
	}
	return (count);
}

static void	free_split(char **split, int size)
{
	int	i;

	i = 0;
	while (i < size)
	{
		free(split[i++]);
	}
	free(split);
}

static char	*get_next_word(char **s, char *set)
{
	int	len;

	while (**s && ft_isin_charset(**s, set))
		(*s)++;
	len = 0;
	while (**(s + len) && !ft_isin_charset(**(s + len), set))
		len++;
	return (ft_strndup(*s, len));
}

char	**ft_split_set(char *s, char *set)
{
	char	**split;
	int		words;
	int		i;

	if (!s)
		return (NULL);
	words = ft_countwords(s, set);
	split = (char **)malloc(sizeof(char *) * (words + 1));
	if (!split)
		return (NULL);
	i = 0;
	while (i < words)
	{
		split[i] = get_next_word(&s, set);
		if (!split[i])
		{
			free_split(split, i);
			return (NULL);
		}
		s += ft_strlen(split[i]);
		i++;
	}
	split[i] = NULL;
	return (split);
}
