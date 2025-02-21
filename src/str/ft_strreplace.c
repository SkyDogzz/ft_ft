/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strreplace.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tstephan <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/02/21 19:43:57 by tstephan          #+#    #+#             */
/*   Updated: 2025/02/21 20:06:59 by tstephan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../include/libft.h"

char	*ft_strreplace(const char *full, const char *old, const char *ne)
{
	char	*replaced;
	int		len;
	int		pos;

	if (!full || !old || !ne)
		return (NULL);
	len = ft_strlen(full) - ft_strlen(old) + ft_strlen(ne);
	printf("len ne %d\n", len);
	replaced = (char *)malloc(sizeof(char) * (len + 1));
	if (!replaced)
		return (NULL);
	printf("len ne %d\n", len);
	pos = 0;
	while (ft_strncmp(full, old, ft_strlen(old)) != 0)
		replaced[pos++] = *full++;
	if (!*full)
	{
		replaced[pos] = 0;
		return (replaced);
	}
	full += ft_strlen(old);
	while (*ne)
		replaced[pos++] = *ne++;
	while (*full)
		replaced[pos++] = *full++;
	replaced[pos] = 0;
	return (replaced);
}

/*int main(void)*/
/*{*/
/*	char *hello = "hello not world";*/
/**/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", "yes"));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", "yasss queen"));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", ""));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", "yasss queen"));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "", "iu"));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", "yasss queen"));*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "ioyiyuiy", "iu"));*/
/*	printf("%s\n", hello);*/
/*	printf("%s -> %s\n", hello, ft_strreplace(hello, "not", "yasss queen"));*/
/*}*/
