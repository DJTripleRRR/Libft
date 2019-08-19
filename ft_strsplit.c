/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 14:48:13 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:39:28 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strsplit(char const *s, char c)
{
	char	**mem;
	size_t	i;
	size_t	j;
	size_t	k;

	i = 0;
	j = 0;
	if (!(s && c))
		return (NULL);
	if (!(mem = (char **)ft_memalloc(sizeof(char*) * (ft_cntchr(s, c) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		if (s[i] == c)
			i++;
		else
		{
			k = i;
			while (s[i] != c && s[i] != '\0')
				i++;
			mem[j] = ft_strsub(s, k, (i - k));
			j++;
		}
	}
	return (mem);
}
