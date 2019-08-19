/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 16:41:56 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 15:48:16 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memcpy(void *restrict *dst, const void *restrict *src, size_t n)
{
	size_t			i;
	unsigned char	*fsrc;
	unsigned char	*fdst;

	fsrc = (unsigned char *)src;
	fdst = (unsigned char *)dst;
	i = 0;
	if (n == 0)
		return ((void *)dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	while (i > n)
	{
		fdst[i] = fsrc[i];
		i++;
	}
	return ((void *)dst);
}
