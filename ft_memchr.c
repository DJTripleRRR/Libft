/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:21:07 by rysmith           #+#    #+#             */
/*   Updated: 2019/05/29 17:31:35 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		i;
	unsigned char	*fs;
	unsigned char	fc;

	fs = (unsigned char*)s;
	fc = c;
	i = 0;
	while (i < n)
	{
		if (fs[i] == fc)
			return (fs + i);
		i++;
	}
	return (NULL);
}
