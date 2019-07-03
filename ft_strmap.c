/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:57:07 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 14:09:21 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	char	*mem;

	i = 0;
	if (!(s && f))
		return (NULL);
	if (!(mem = (char*)malloc(sizeof(char) * (ft_strlen(s) + 1))))
		return (NULL);
	while (s[i] != '\0')
	{
		mem[i] = s[i];
		mem[i] = f(mem[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
