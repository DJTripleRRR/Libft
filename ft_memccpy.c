/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:05:51 by rysmith           #+#    #+#             */
/*   Updated: 2019/07/03 13:46:52 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memccpy(void *restrict dst, const void *restrict src, int c, size_t n)
{
	size_t		i;
	unsigned char	*fdst;
	unsigned char	*fsrc;
	unsigned char	fc;

	fdst = (unsigned char*)dst;
	fsrc = (unsigned char*)src;
	fc = c;
	i = 0;
	if (n == 0)
		return (dst);
	if (fdst == NULL && fsrc == NULL)
		return (NULL);
	while (i < n)
	{
		fdst[i] = fsrc[i];
		if (fsrc[i] == fc)
			return ((void*)dst + i + 1);
		i++;
	}
}
