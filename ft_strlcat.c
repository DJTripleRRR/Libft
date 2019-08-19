/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/12 14:48:22 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 15:57:24 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t dstsize)
{
	size_t	srclen;
	size_t	dstlen;
	size_t	i;
	size_t	len;

	i = 0;
	srclen = ft_strlen(src);
	dstlen = ft_strlen(dst);
	len = dstlen;
	if (dstlen > dstsize)
		len = dstsize;
	len = len + srclen;
	while ((src[i] != '\0') && (i + dstlen < dstsize - 1) && (dstsize > 0))
	{
		dst[i + dstlen] = src[i];
		i++;
	}
	dst[i + dstlen] = '\0';
	return (len);
}
