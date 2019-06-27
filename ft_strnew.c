/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 12:06:56 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/27 12:19:23 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strnew(size_t size)
{
	char	*mem;
	int		i;

	i = 0;
	mem = (char *)memalloc(size * sizeof(char));
	if (mem == NULL)
	{
		return (NULL);
	}
	while (size > 0)
	{
		((char *)mem)[i] = '\0';
		i++;
		size--;
	}
	return (mem);
}
