/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:14:06 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:08:20 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*mem;

	i = 0;
	if (s == NULL)
		return (NULL);
	if ((!(mem = ft_strnew(len))) || (start > (ft_strlen(s) - 1)))
		return (NULL);
	while (i < len && s[start] != '\0')
	{
		mem[i] = s[start];
		start++;
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
