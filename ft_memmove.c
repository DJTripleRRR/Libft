/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:13:45 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 17:01:47 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t			i;
	unsigned char	*fsrc;
	unsigned char	*fdst;

	fsrc = (unsigned char *)src;
	fdst = (unsigned char *)dst;
	i = len;
	if (len == 0)
		return (dst);
	if (fsrc == NULL && fdst == NULL)
		return (NULL);
	if (dst > src)
	{
		while (i > 0)
		{
			i--;
			fdst[i] = fsrc[i];
		}
	}
	else
		dst = ft_memcpy(dst, src, len);
	return ((void *)dst);
}
