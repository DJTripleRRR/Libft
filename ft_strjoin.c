/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:33:56 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/15 15:39:44 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*mem;
	size_t	i;

	i = 0;
	if (!s1 && s2)
		return (NULL);
	if (!(mem = (char *)sizeof(ft_strlen(s1) + ft_strlen(s2) + 1)))
		return (NULL);
	while (s1[i] != '\0')
	{
		mem[i] = s1[i];
		i++;
	}
	i = 0;
	while (s2[i] != '\0')
	{
		mem[i] = s2[i];
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
