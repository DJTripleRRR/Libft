/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:48:45 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/15 14:31:36 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

void	*ft_memalloc(size_t size)
{
	void	*mem;

	if (size == '0')
	{
		return (NULL);
	}
	mem = malloc(size);
	if (mem == NULL)
	{
		return (NULL);
	}
	ft_bzero(mem, size);
	return (mem);
}
