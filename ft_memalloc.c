/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/27 11:48:45 by rysmith           #+#    #+#             */
/*   Updated: 2019/06/27 11:59:19 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <libft.h>

void	*ft_memalloc(size_t size)
{
	void	*memadd;

	if (size == '0')
	{
		return (NULL);
	}
	memadd = malloc(size);
	if (memadd == NULL)
	{
		return (NULL);
	}
	ft_bzero(memadd, size);
	return (mem);
}
