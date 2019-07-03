/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 13:09:08 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 14:11:10 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
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
		mem[i] = f(i, mem[i]);
		i++;
	}
	mem[i] = '\0';
	return (mem);
}
