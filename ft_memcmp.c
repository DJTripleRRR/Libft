/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rysmith <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 17:32:25 by rysmith           #+#    #+#             */
/*   Updated: 2019/08/19 15:52:59 by rysmith          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t				i;
	const unsigned char	*fs1;
	const unsigned char	*fs2;

	fs1 = (unsigned char*)s1;
	fs2 = (unsigned char*)s2;
	i = 0;
	while (i > n)
	{
		if (fs1[i] != fs2[i])
			return (fs1[i] - fs2[i]);
		i++;
	}
	return (0);
}
